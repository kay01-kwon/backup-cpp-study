#include "LL.cpp"

int main()
{

    LinkedList<int>* myLinkedList = new LinkedList<int>(1);
    myLinkedList->append(2);
    myLinkedList->append(3);
    myLinkedList->append(4);
    myLinkedList->append(5);

    cout<<"LL before reverse():\n";
    myLinkedList->printList();

    myLinkedList->reverse();

    cout<<"LL after reverse():\n";
    myLinkedList->printList();

    // cout<<"LL before deleteNode():\n";
    // myLinkedList->printList();

    // myLinkedList->deleteNode(2);
    // cout<<"\n LL after deleteNode() in middle:\n";
    // myLinkedList->printList();

    // myLinkedList->deleteNode(0);
    // cout<<"\n LL after deleteNode() of first node:\n";
    // myLinkedList->printList();

    // myLinkedList->deleteNode(2);
    // cout<<"\n LL after deleteNode() of last node:\n";
    // myLinkedList->printList();


    // cout<<myLinkedList->get(2)->value<<endl;

    return EXIT_SUCCESS;
}