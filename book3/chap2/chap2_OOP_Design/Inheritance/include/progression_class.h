#ifndef PROGRESSION_CLASS_H
#define PROGRESSION_CLASS_H
#include <iostream>
using std::cout;
using std::endl;

class Progression{
    public:
        // Constructor
        Progression(long f = 0);

        // Print value
        void printProgression(int n);

        // Destructor
        virtual ~Progression();

    protected:

        virtual long firstValue();
        virtual long nextValue();

        long first;
        long curr;
};


#endif