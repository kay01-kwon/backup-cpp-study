#ifndef ARITHPROGRESSION_CLASS_H
#define ARITHPROGRESSION_CLASS_H

#include "progression_class.h"

class ArithProgression: public Progression
{
    public:

        // Constructor
        ArithProgression(long i = 1);

    protected:

        virtual long nextValue();

        long inc;

};

#endif