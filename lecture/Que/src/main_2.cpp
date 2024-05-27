#include "que_practice.cpp"

int main()
{
    Que<int>* myQueue = new Que<int>(1);

    myQueue->enque(2);

    myQueue->printQue();

    return EXIT_SUCCESS;
}