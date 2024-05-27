#include "cll_queue.cpp"

int main()
{
    CllQueue<string> A;
    A.enqueue("BOS");
    A.display();

    A.enqueue("ATL");
    A.display();
    
    A.enqueue("MSP");
    A.display();

    A.enqueue("LAX");
    A.display();
    
    A.dequeue();
    A.display();
    cout<<"\n";
    
    return EXIT_SUCCESS;
    
}