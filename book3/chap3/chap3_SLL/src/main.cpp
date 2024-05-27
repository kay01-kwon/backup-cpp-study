#include "singly_linked_list.h"
#include "singly_linked_list.cpp"
using std::endl;

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

    a.removeFront();

    cout<<"Display Node after removing removeFront: ";
    a.display();
    cout<<"\n";

    cout<<"Check size: ";
    cout<<a.size()<<endl;



    SLinkedList<int> b;
    b.addFront(13);
    b.addFront(5);
    b.addFront(7);
    b.addFront(9);

    cout<<"Display Node: ";
    b.display();
    cout<<"\n";

    cout<<"Check size: ";
    cout<<b.size()<<endl;

    cout<<"Finish"<<endl;



    return EXIT_SUCCESS;
}