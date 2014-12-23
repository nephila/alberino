#include "MoscowDiscoAnimation.h"
#include <stdlib.h>
#include <Arduino.h>

void MoscowDiscoAnimation::drawFrame() {
    unsigned int leds = getTotalLeds();
    for (int led = 0 ; led < leds ; led++) {
        digitalWrite(led, HIGH);
    }
    delay(50);
    for (int led = 0 ; led < leds ; led++) {
        digitalWrite(led, LOW);
    }
    delay(50);
};
