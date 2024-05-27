#include "arithprogression_class.h"

ArithProgression::ArithProgression(long i)
:Progression(), inc(i)
{

}

long ArithProgression::nextValue()
{
    curr += inc;
    return curr;
}