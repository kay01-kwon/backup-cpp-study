#include "DLL.cpp"

int main()
{
    /** 39
    DoublyLinkedList<int>* myDLL = new DoublyLinkedList<int>(7);

    myDLL->printList();
    */

   /** 40 
    DoublyLinkedList<int>* myDLL = new DoublyLinkedList<int>(1);

    myDLL->append(2);

    myDLL->printList();
    */
   /**41
   DoublyLinkedList<int>* myDLL = new DoublyLinkedList<int>(1);
   
   myDLL->append(2);
   
   cout<<"DLL b/f deleteLast():\n";
   myDLL->printList();


   myDLL->deleteLast();
   cout<<"DLL a/f 1st deleteLast():\n";
   myDLL->printList();

   myDLL->deleteLast();
   cout<<"DLL a/f 2nd deleteLast():\n";
   myDLL->printList();

   myDLL->deleteLast();
   cout<<"DLL a/f 3rd deleteLast():\n";
   myDLL->printList();
    */

   /**42
   DoublyLinkedList<int>* myDLL = new DoublyLinkedList<int>(2);
   myDLL->append(3);

   myDLL->prepend(1);

   myDLL->printList();
   */

  /**43
   DoublyLinkedList<int>* myDLL = new DoublyLinkedList<int>(1);
   
   myDLL->append(2);
   
   cout<<"DLL b/f deleteFirst():\n";
   myDLL->printList();


   myDLL->deleteFirst();
   cout<<"DLL a/f 1st deleteFirst():\n";
   myDLL->printList();

   myDLL->deleteFirst();
   cout<<"DLL a/f 2nd deleteFirst():\n";
   myDLL->printList();

   myDLL->deleteFirst();
   cout<<"DLL a/f 3rd deleteFirst():\n";
   myDLL->printList();
    */
   /** 44
   DoublyLinkedList<int>* myDLL = new DoublyLinkedList<int>(0);
   myDLL->append(1);
   myDLL->append(2);
   myDLL->append(3);

   myDLL->printList();

   cout<<myDLL->get(1)->value<<endl;
   cout<<myDLL->get(2)->value<<endl;
   */

  /**45
  DoublyLinkedList<int>* myDLL = new DoublyLinkedList<int>(11);
  myDLL->append(3);
  myDLL->append(23);
  myDLL->append(7);

  myDLL->set(1,4);

  myDLL->printList();
   */

  /**46
  DoublyLinkedList<int>* myDLL = new DoublyLinkedList<int>(1);
  myDLL->append(3);

   myDLL->insert(1,2);
   myDLL->printList();
   */

  DoublyLinkedList<int>* myDLL = new DoublyLinkedList<int>(1);
  myDLL->append(2);
  myDLL->append(3);
  myDLL->append(4);
  myDLL->append(5);
  

  cout<<"DLL b/f deleteNode:\n";
  myDLL->printList();

  myDLL->deleteNode(2);
  cout<<"\nDLL a/f deleteNode in the middle:\n";
  myDLL->printList();

  myDLL->deleteNode(0);
  cout<<"\nDLL a/f deleteNode in the first node:\n";
  myDLL->printList();

  myDLL->deleteNode(2);
  cout<<"\nDLL a/f deleteNode in the last node:\n";
  myDLL->printList();

   return EXIT_SUCCESS;
}