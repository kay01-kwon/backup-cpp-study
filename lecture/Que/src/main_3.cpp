#include "que_practice.cpp"

int main()
{
    Que<int>* myQueue = new Que<int>(1);

    myQueue->enque(2);

    cout<<"Dequeued value: "<<myQueue->deque();

    cout<<"\n\nDequeued value: "<<myQueue->deque();

    cout<<"\n\nDequeued value: "<<myQueue->deque()<<endl;

    return EXIT_SUCCESS;
}