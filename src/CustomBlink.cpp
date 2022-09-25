#include <Arduino.h>
#include "CustomBlink.h"

Blink::Blink(int led = 13){
    ledPin = led;
}
void Blink::pinSetup(){
    pinMode(ledPin, OUTPUT);
}
void Blink::blink(int time = 1000){
    digitalWrite(ledPin, HIGH);
    Serial.print("Led ON");
    Serial.println(ledPin);
    delay(time);
    digitalWrite(ledPin, LOW);
    Serial.println("Led OFF");
    delay(time);
}
