#include "stack_practice.cpp"

int main()
{
    Stack<int>* myStack = new Stack<int>(4);

    myStack->getTop();
    myStack->getHeight();
    myStack->printStack();

    return EXIT_SUCCESS;
}