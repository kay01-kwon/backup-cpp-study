#include "stack_practice.cpp"

int main()
{
    Stack<int>* myStack = new Stack<int>(2);

    myStack->push(1);
    myStack->printStack();

    return EXIT_SUCCESS;
}