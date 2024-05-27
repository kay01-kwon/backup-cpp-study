#include "deque_dll.cpp"

int main()
{
    DllDeque<string> A;
    A.insert_back("A");
    A.insert_back("B");
    A.insert_back("C");
    A.display();

    A.remove_front();
    A.insert_front("a");
    A.remove_back();
    A.insert_front("b");
    A.remove_back();
    A.insert_front("c");
    A.display();


    return EXIT_SUCCESS;
}