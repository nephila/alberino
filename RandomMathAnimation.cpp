#include "RandomMathAnimation.h"
#include <stdlib.h>
#include <Arduino.h>
#include <math.h>
#include <time.h> 

void RandomMathAnimation::drawFrame() {
    unsigned int leds = getTotalLeds();
    srand (1000);
    for (int led = 0 ; led < leds ; led++) {
        int x = rand() % led;
        digitalWrite(led, HIGH);
    }
    delay(500);
    for (int led = 0 ; led < leds ; led++) {
        digitalWrite(led, LOW);
    }
    delay(250);
    for (int led = 0 ; led < leds ; led++) {
        if (led % 2 != 0) {
            digitalWrite(led, HIGH);
        }
    }
    delay(500);
    for (int led = 0 ; led < leds ; led++) {
        digitalWrite(led, LOW);
    }
    delay(500);
    for (int led = 0 ; led < leds ; led++) {
        if (led % 2 == 0) {
            digitalWrite(led, HIGH);
        }
    }
    delay(500);
    for (int led = 0 ; led < leds ; led++) {
        digitalWrite(led, LOW);
    }
    delay(500);
    for (int led = 0 ; led < leds ; led++) {
        int x = sin(led * 3.14);
        int y = cos(led * 3.14);
        int z = exp(led);
        int val = ((x * y) + (int)pow(z * rand() % 10 , 2)) % (led);
        digitalWrite(led, HIGH);
        
    }
    delay(500);
    for (int led = 0 ; led < leds ; led++) {
        digitalWrite(led, LOW);
    }
    delay(500);
};
