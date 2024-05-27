#include "doubly_linked_list.cpp"

int main()
{
    DLinkedList<string> a;
    a.addFront("JFK");
    a.addBack("SFO");
    a.addBack("PVD");
    a.addFront("ABC");

    a.display();
    cout<<"\n";

    a.removeBack();
    a.display();
    cout<<"\n";

    return EXIT_SUCCESS;
}
