#include "geometricprogression_class.h"

GeomProgression::GeomProgression(long b)
:Progression(1), base(b)
{

}

long GeomProgression::nextValue()
{
    curr *= base;
    return curr;
}