/*
	IJnimation snake by realitygaps
*/
int snake() {
	byte snake1[8]={
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000};

	byte snake2[8]={
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000001,
		B00000000};

	byte snake3[8]={
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000011,
		B00000000};

	byte snake4[8]={
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000111,
		B00000000};

	byte snake5[8]={
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00001110,
		B00000000};

	byte snake6[8]={
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00011100,
		B00000000};

	byte snake7[8]={
		B00000000,
		B00000000,
		B01000000,
		B00000000,
		B00000000,
		B00000000,
		B00111000,
		B00000000};

	byte snake8[8]={
		B00000000,
		B00000000,
		B01000000,
		B00000000,
		B00000000,
		B00100000,
		B00110000,
		B00000000};

	byte snake9[8]={
		B00000000,
		B00000000,
		B01000000,
		B00000000,
		B00100000,
		B00100000,
		B00100000,
		B00000000};

	byte snake10[8]={
		B00000000,
		B00000000,
		B01000000,
		B00100000,
		B00100000,
		B00100000,
		B00000000,
		B00000000};

	byte snake11[8]={
		B00000000,
		B00000000,
		B01100000,
		B00100000,
		B00100000,
		B00000000,
		B00000000,
		B00000000};

	byte snake12[8]={
		B00000000,
		B01000000,
		B01100000,
		B00100000,
		B00100000,
		B00000000,
		B00000000,
		B00000000};

	byte snake13[8]={
		B01000000,
		B01000000,
		B01100000,
		B00100000,
		B00000000,
		B00000000,
		B00000000,
		B00000000};

	byte snake14[8]={
		B01100000,
		B01000000,
		B01100000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000};

	byte snake15[8]={
		B01110000,
		B01000000,
		B01000000,
		B00000000,
		B00000100,
		B00000000,
		B00000000,
		B00000000};

	byte snake16[8]={
		B01111000,
		B01000000,
		B00000000,
		B00000000,
		B00000100,
		B00000000,
		B00000000,
		B00000000};

	byte snake17[8]={
		B01111100,
		B00000000,
		B00000000,
		B00000000,
		B00000100,
		B00000000,
		B00000000,
		B00000000};

	byte snake18[8]={
		B00111100,
		B00000100,
		B00000000,
		B00000000,
		B00000100,
		B00000000,
		B00000000,
		B00000000};

	byte snake19[8]={
		B00011100,
		B00000100,
		B00000100,
		B00000000,
		B00000100,
		B00000000,
		B00000000,
		B00000000};

	byte snake20[8]={
		B00001100,
		B00000100,
		B00000100,
		B00000100,
		B00000100,
		B00000000,
		B00000000,
		B00000000};

	byte snake21[8]={
		B00001100,
		B00000100,
		B00000100,
		B00000100,
		B00000100,
		B00000100,
		B00000000,
		B00000000};

	byte snake22[8]={
		B00000100,
		B00000100,
		B00000100,
		B00000100,
		B00000100,
		B00000100,
		B00000100,
		B00000000};

	byte snake23[8]={
		B00000000,
		B00000100,
		B00000100,
		B00100100,
		B00000100,
		B00000100,
		B00001100,
		B00000000};

	byte snake24[8]={
		B00000000,
		B00000000,
		B00000100,
		B00100100,
		B00000100,
		B00000100,
		B00011100,
		B00000000};

	byte snake25[8]={
		B00000000,
		B00000000,
		B00000000,
		B00100100,
		B00000100,
		B00010100,
		B00011100,
		B00000000};

	byte snake26[8]={
		B00000000,
		B00000000,
		B00000000,
		B00100000,
		B00010100,
		B00010100,
		B00011100,
		B00000000};

	byte snake27[8]={
		B00000000,
		B00000000,
		B00000000,
		B00100000,
		B00110000,
		B00010100,
		B00011100,
		B00000000};

	byte snake28[8]={
		B00000000,
		B00000000,
		B00000000,
		B01100000,
		B00110000,
		B00010100,
		B00011100,
		B00000000};

	byte snake29[8]={
		B00000000,
		B00000000,
		B00000000,
		B11100000,
		B00110000,
		B00010100,
		B00011100,
		B00000000};


	byte snake30[8]={
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000,
		B00000000};

	bool skip;
	skip = render(snake1, 200);
	if (skip) {
		return true;
	}
	skip = render(snake2, 200);
	if (skip) {
		return true;
	}
	skip = render(snake3, 200);
	if (skip) {
		return true;
	}
	skip = render(snake4, 200);
	if (skip) {
		return true;
	}
	skip = render(snake5, 200);
	if (skip) {
		return true;
	}
	skip = render(snake6, 200);
	if (skip) {
		return true;
	}
	skip = render(snake7, 200);
	if (skip) {
		return true;
	}
	skip = render(snake8, 200);
	if (skip) {
		return true;
	}
	skip = render(snake9, 200);
	if (skip) {
		return true;
	}
	skip = render(snake10, 200);
	if (skip) {
		return true;
	}
	skip = render(snake11, 200);
	if (skip) {
		return true;
	}
	skip = render(snake12, 200);
	if (skip) {
		return true;
	}
	skip = render(snake13, 200);
	if (skip) {
		return true;
	}
	skip = render(snake14, 200);
	if (skip) {
		return true;
	}
	skip = render(snake15, 200);
	if (skip) {
		return true;
	}
	skip = render(snake16, 200);
	if (skip) {
		return true;
	}
	skip = render(snake17, 200);
	if (skip) {
		return true;
	}
	skip = render(snake18, 200);
	if (skip) {
		return true;
	}
	skip = render(snake19, 200);
	if (skip) {
		return true;
	}
	skip = render(snake20, 200);
	if (skip) {
		return true;
	}
	skip = render(snake21, 200);
	if (skip) {
		return true;
	}
	skip = render(snake22, 200);
	if (skip) {
		return true;
	}
	skip = render(snake23, 200);
	if (skip) {
		return true;
	}
	skip = render(snake24, 200);
	if (skip) {
		return true;
	}
	skip = render(snake25, 200);
	if (skip) {
		return true;
	}
	skip = render(snake26, 200);
	if (skip) {
		return true;
	}
	skip = render(snake27, 200);  
	if (skip) {
		return true;
	}
	skip = render(snake28, 200);
	if (skip) {
		return true;
	}
	skip = render(snake29, 200);
	if (skip) {
		return true;
	}
	skip = render(snake30, 200);
	if (skip) {
		return true;
	}
	skip = render(snake29, 200);
	if (skip) {
		return true;
	}
	skip = render(snake30, 200);
	if (skip) {
		return true;
	}
	skip = render(snake29, 200);
	if (skip) {
		return true;
	}
	skip = render(snake30, 200);
	if (skip) {
		return true;
	}
	return false;
}


