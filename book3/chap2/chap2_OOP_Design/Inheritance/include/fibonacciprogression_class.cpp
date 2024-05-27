#include "fibonacciprogression_class.h"

FibonProgression::FibonProgression(long f, long s)
:Progression(f), second(s), prev(second - first)
{

}

long FibonProgression::firstValue()
{
    curr = first;
    prev = second - first;
    return curr;
}

long FibonProgression::nextValue()
{
    long temp = prev;
    prev = curr;
    curr += temp;
    return curr;

}