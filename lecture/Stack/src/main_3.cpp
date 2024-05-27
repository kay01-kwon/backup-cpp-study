#include "stack_practice.cpp"

int main()
{
    Stack<int>* myStack = new Stack<int>(1);

    cout<<"Popped value: "<<myStack->pop();

    cout<<"\n\nPopped value: "<<myStack->pop()<<endl;
    

    return EXIT_SUCCESS;
}