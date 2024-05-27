#include "s_linked_list.cpp"
#include "s_linked_list.h"

int main()
{
    SLinkedList<string> a;
    a.addFront("MSP");
    a.addFront("ATL");
    a.addFront("BOS");
    a.addFront("LAX");

    cout<<"Display Node: ";
    a.display();
    cout<<"\n";


    return EXIT_SUCCESS;
}
