#include <CustomBlink.h>

Blink led(12);

void setup() {
  led.pinSetup();
}

void loop() {
  led.blink(1500);
}










