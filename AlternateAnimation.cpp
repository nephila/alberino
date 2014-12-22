#include "AlternateAnimation.h"
#include <stdlib.h>
#include <Arduino.h>

void AlternateAnimation::drawFrame() {
    unsigned int leds = getTotalLeds();
    for (int led = 0 ; led < leds ; led++) {
        if (led % 2 == 0) {
            digitalWrite(led, HIGH);
        }   
        else { 
            digitalWrite(led, LOW);
        }
    }
    delay(1000);
    for (int led = 0 ; led < leds ; led++) {
        if (led % 2 != 0) {
            digitalWrite(led, HIGH);
        }
        else { 
            digitalWrite(led, LOW);
        }  
    }   
};
