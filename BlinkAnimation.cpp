#include "BlinkAnimation.h"
#include <stdlib.h>
#include <Arduino.h>

void BlinkAnimation::drawFrame() {
    unsigned int leds = getTotalLeds();
    for (int led = 0 ; led < leds ; led++) {
        digitalWrite(led, HIGH);   
    }
    delay(1000);
    for (int led = 0 ; led < leds ; led++) {
        digitalWrite(led, LOW);     
    }
    delay(1000);
};
