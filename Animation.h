#ifndef ANIMATION_CLASS
#define ANIMATION_CLASS

#include "Animation.h"

class Animation {
    private:
        unsigned int repetitions;
        unsigned int totalLeds;
    public:
        virtual void drawFrame() = 0;
        Animation* setRepetitions(unsigned int repetitions) {this->repetitions = repetitions; return this;};
        unsigned int getRepetitions() {return this->repetitions;};
        Animation* setTotalLeds(unsigned int totalLeds) {this->totalLeds = totalLeds; return this;};
        unsigned int getTotalLeds() {return this->totalLeds;};
        void animate() {
            for (int i = 0 ; i < getRepetitions() ; i++) {
                drawFrame();
            }
        }
};

#endif
