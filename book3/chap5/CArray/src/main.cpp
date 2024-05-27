#include "c_array.cpp"

int main()
{

    CArray<string> CA(7);

    CA.enqueue("A");
    CA.enqueue("B");
    CA.enqueue("C");
    CA.enqueue("D");
    CA.enqueue("E");
    CA.enqueue("F");
    CA.enqueue("G");
    CA.display();

    for(int i = 0; i < 8;i++)
        CA.dequeue();

    CA.display();    

    CA.enqueue("a");
    CA.enqueue("b");
    CA.enqueue("c");
    CA.enqueue("d");
    CA.enqueue("e");
    // CA.enqueue("f");
    // CA.enqueue("g");

    CA.display();


    return EXIT_SUCCESS;
    
}