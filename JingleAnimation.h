#ifndef JINGLE_ANIMATION_CLASS
#define JINGLE_ANIMATION_CLASS

#include "Animation.h"

class JingleAnimation: public Animation {
    private:
        unsigned int tonePin;
        unsigned int restartCounter;

    public:
        JingleAnimation() {this->restartCounter = 0;}
        void drawFrame();
        Animation* setTonePin(unsigned int tonePin) {this->tonePin = tonePin; return this; }
};

#endif
