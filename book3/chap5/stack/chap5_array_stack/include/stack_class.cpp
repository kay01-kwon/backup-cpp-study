#include "stack_class.h"

template <class T>
ArrayStack<T>::ArrayStack(int cap)
: Stack(new T[cap]), capacity(cap), t(-1)
{

}

template <class T>
int ArrayStack<T>::size() const
{
    return (t + 1);
}

template <class T>
const T& ArrayStack<T>::top() const
{
    if(empty())
        throw StackEmpty("Top of empty stack\n");
    return Stack[t];
}

template <class T>
bool ArrayStack<T>::empty() const
{
    return (t < 0);
}

template <class T>
void ArrayStack<T>::display() const
{
    for(int i = 0; i < size(); i++)
        cout<<" "<<Stack[i]<<" ";
    cout<<"\n";
}


template <class T>
void ArrayStack<T>::push(const T& e)
{
    if(size() == capacity)
        throw StackFull("Push to full stack\n");
    Stack[++t] = e;
}

template <class T>
void ArrayStack<T>::pop()
{
    if(empty())
        throw StackEmpty("Pop from empty stack\n");
    --t;
}
