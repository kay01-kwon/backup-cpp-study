#include "s_stack.h"

template <typename T>
LinkedStack<T>::LinkedStack()
:S(), n(0)
{

}

template <typename T>
int LinkedStack<T>::size() const
{
    return n;
}

template <typename T>
bool LinkedStack<T>::empty() const
{
    return n==0;
}

template <typename T>
const T& LinkedStack<T>::top() const
{
    return S.front();
}

template <typename T>
void LinkedStack<T>::display() const
{
    S.display();
    cout<<"\n";
}


template <typename T>
void LinkedStack<T>::push(const T& e)
{
    ++n;
    S.addFront(e);
}

template <typename T>
void LinkedStack<T>::pop()
{
    --n;
    S.removeFront();
}