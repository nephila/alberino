#ifndef JINGLE_ANIMATION_CLASS
#define JINGLE_ANIMATION_CLASS

#include "Animation.h"

class JingleAnimation: public Animation {
    private:
        unsigned int tonePin;
  
    public:
        void drawFrame();
        Animation* setTonePin(unsigned int tonePin) {this->tonePin = tonePin; return this; }
};

#endif
