#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <setjmp.h>
#include "Animation.h"
#include "SlimArray.h"

#include "BlinkAnimation.h"
#include "AlternateAnimation.h"

unsigned int TOTAL_LEDS = 14;
SlimArray<Animation*> animations;

void setup() {                
    for (int led = 0 ; led < TOTAL_LEDS ; led++) {
        pinMode(led, OUTPUT);     
    }
    animations.insert((new BlinkAnimation())->setTotalLeds(TOTAL_LEDS)->setRepetitions(2));
    animations.insert((new AlternateAnimation())->setTotalLeds(TOTAL_LEDS)->setRepetitions(4));
}

void cleanup() {
    for (int led = 0 ; led < TOTAL_LEDS ; led++) {
        digitalWrite(led, LOW);
    }
}

void loop() {
    for (int i = 0 ; i < animations.getSize() ; i++) {
        cleanup();
        animations.get(i)->animate();
    }
}
