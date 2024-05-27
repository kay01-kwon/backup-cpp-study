#ifndef GEOMETRICPROGRESSION_CLASS_H
#define GEOMETRICPROGRESSION_CLASS_H
#include "progression_class.h"

class GeomProgression:public Progression
{
    public:
        // Constructor
        GeomProgression(long b = 2);

    protected:

        virtual long nextValue();

        long base;
};

#endif