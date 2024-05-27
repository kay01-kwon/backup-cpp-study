#include "s_stack.cpp"

int main()
{
    LinkedStack<int> A;
    A.push(7);
    A.push(13);
    A.display();
    cout<<"\n";
    A.push(9);
    A.display();
    cout<<"\n";
    A.pop();
    A.display();
    cout<<"\n";
    
    LinkedStack<string> B;
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