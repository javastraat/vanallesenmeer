/*                            IJduino 1.1
Requires:
 * 8X8 LED grid MAX7219
 * Mini Breadboard
 * Atmega328
 * Button
 * 2 Wires
 * 4.5 Volt
 (c) IJhack 2014 GNU GPL 
http://ijhack.org/
 */
#include "LedControl.h"

/* using VCC, GND, DIN 20, CS 21, CLK 5 for the MAX7219 */
static const int DATA_PIN = 13;
static const int CLK_PIN  = 11;
static const int CS_PIN   = 12;

LedControl lc=LedControl(DATA_PIN, CLK_PIN, CS_PIN, 1);

//static const int lowPin = 11;             /* ground pin for the buton ;-) */
static const int buttonPin = 4;           /* choose the input pin for the pushbutton */

static const int animations = 23;
int (*ijnimations[animations])() = {
	ijhacklogo, ghost, invader, heart, invadesquid, jumper, ijlogowink, 
	heartbeat, eq, invaderagain, pong, snake, arrows, directions,
	packman, diagonals, waterdrip, aliens, blockanim, pulse, tewdoodles,
	battery, xmastree
};

int lastButtonState = LOW;   /* the previous reading from the input pin */
unsigned long lastDebounceTime = 0;   /* the last time the output pin was toggled */
unsigned long debounceDelay = 50;     /* the debounce time; increase if the output flickers */
int animation = 0;
int buttonState = LOW;
int brightness = 3;          /* Set brightneslevel to 5 (0 to 15 are valid) */

void setup() {
	/*
	   The MAX72XX is in power-saving mode on startup,
	   we have to do a wakeup call
	 */
	lc.shutdown(0,false);
	/* Set the brightness to a medium values */
	lc.setIntensity(0, brightness);
	/* and clear the display */
	lc.clearDisplay(0);
	/* setup pins */
//	pinMode(buttonPin, INPUT_PULLUP);
//	pinMode(lowPin, OUTPUT);
//	digitalWrite(lowPin, LOW);
}

void loop() {
	bool skip;
	if (animation == 0) {
		for (int all = 0; all < animations; all++) {
			for (int looper = 0; looper < 3; looper++) {
				skip = (bool)(ijnimations)[all]();
				if (skip) {
					return;
				}
			}
		}
	} else {
		(ijnimations)[animation]();
	}
}

int render(const byte* frame, long delaytime) {
	lc.setColumn(0,0,frame[7]);
	lc.setColumn(0,1,frame[6]);
	lc.setColumn(0,2,frame[5]);
	lc.setColumn(0,3,frame[4]);
	lc.setColumn(0,4,frame[3]);
	lc.setColumn(0,5,frame[2]);
	lc.setColumn(0,6,frame[1]);
	lc.setColumn(0,7,frame[0]);

	unsigned long startTime = millis();
	while ((startTime + delaytime) > millis()){

		// read the state of the switch into a local variable:
		int reading = digitalRead(buttonPin);

		// check to see if you just pressed the button 
		// (i.e. the input went from HIGH to LOW),  and you've waited 
		// long enough since the last press to ignore any noise:  

		// If the switch changed, due to noise or pressing:
		if (reading != lastButtonState) {
			// reset the debouncing timer
			lastDebounceTime = millis();
		} 

		if ((millis() - lastDebounceTime) > debounceDelay) {
			// whatever the reading is at, it's been there for longer
			// than the debounce delay, so take it as the actual current state:

			// if the button state has changed:
			if (reading != buttonState) {
				buttonState = reading;

				// only toggle the animation if the new button state is HIGH
				if (buttonState == LOW) {
					animation++;
					if (animation > animations) {
						animation = 0;
					}
					return true;
				}
			}
		}

		// save the reading.  Next time through the loop,
		// it'll be the lastButtonState:
		lastButtonState = reading;
	}
	return false;  /* don't skip the rest */
} 

