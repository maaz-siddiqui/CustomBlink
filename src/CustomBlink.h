#ifndef Blink_h
#define Blink_h
#include <Arduino.h>

class Blink{
    private:
        int ledPin;
    public:
        Blink(int led = 13);
        void pinSetup();
        void blink(int time = 1000);
};

#endif