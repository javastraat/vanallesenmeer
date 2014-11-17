avrdude -b 19200 -c usbasp -p m328p -v -e -U efuse:w:0x05:m -U hfuse:w:0xD6:m -U lfuse:w:0xFF:m
avrdude -b 19200 -c usbasp -p m328p -v -e -U flash:w:hex/optiboot_atmega328.hex -U lock:w:0x0F:m

