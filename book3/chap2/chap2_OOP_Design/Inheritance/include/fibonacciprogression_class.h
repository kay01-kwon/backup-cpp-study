#ifndef FIBONACCIPROGRESSION_CLASS_H
#define FIBONACCIPROGRESSION_CLASS_H

#include "progression_class.h"

class FibonProgression : public Progression
{
    public: 
        FibonProgression(long f = 0, long s = 1);

    protected:
        virtual long firstValue();
        virtual long nextValue();

        long second;
        long prev;
};

#endif