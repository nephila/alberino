#include "AlternateAnimation.h"
#include <stdlib.h>
#include <Arduino.h>
#include <math.h> 

#define PI 3.14159265

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
    delay(1000);
    for (int led = 0 ; led < leds ; led++) {
        int y = floor(cos(led*PI/180));
        if (y != 0) {
            digitalWrite(led, HIGH);
        }
        else { 
            digitalWrite(led, LOW);
        }
    }   
    delay(500);
    for (int led = 0 ; led < leds ; led++) {
        int y = floor(cos(led*PI/180));
        if (y != 0) {
            digitalWrite(led, HIGH);
        }
        else { 
            digitalWrite(led, LOW);
        }
    }   
    delay(500);
};
