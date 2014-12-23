#include "LadderAnimation.h"
#include <stdlib.h>
#include <Arduino.h>

void LadderAnimation::drawFrame() {
    unsigned int leds = getTotalLeds();
    for (int led = 0 ; led < leds ; led++) {
        digitalWrite(led, HIGH);
        delay(100);
        digitalWrite(led, LOW);
    }
};