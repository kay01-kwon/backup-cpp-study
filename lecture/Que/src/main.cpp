#include "que_practice.cpp"

int main()
{
    Que<int>* myQueue = new Que<int>(7);

    myQueue->getFirst();
    myQueue->getLast();
    myQueue->getLength();

    return EXIT_SUCCESS;
}