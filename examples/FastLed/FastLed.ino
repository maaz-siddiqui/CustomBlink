#include <CustomBlink.h>

Blink led; //initialize led default pin 13. change using led(<pin Numbed>)

void setup(){
	led.pinSetup(); //setting pinmode for led pin
}
void loop(){
	led.blink(200); //200ms delay between blinks
}
