#include "progression_class.h"

Progression::Progression(long f):
first(f), curr(f)
{

}

void Progression::printProgression(int n)
{
    cout<<firstValue();
    for(int i = 2; i <=n; i++)
    {
        cout<< ' '<<nextValue();
    }
        cout<<endl;
}

Progression::~Progression()
{

}

long Progression::firstValue()
{
    curr = first;
    return curr;
}

long Progression::nextValue()
{
    return ++curr;
}