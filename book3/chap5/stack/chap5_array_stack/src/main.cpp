#include "stack_class.h"
#include "stack_class.cpp"

int main()
{
    ArrayStack<int> A;
    // cout<<A.top()<<endl;
    A.push(7);
    A.push(13);
    A.display();
    A.push(9);
    A.display();

    cout<<"Size of A: "<<A.size()<<endl;
    A.pop();
    A.display();

    ArrayStack<string> B(10);
    B.push("Bob");
    B.push("Alice");
    B.display();
    B.push("Eve");
    B.display();
    cout<<"Size of B: "<<B.size()<<endl;
    B.pop();
    B.display();
    


    return EXIT_SUCCESS;
}