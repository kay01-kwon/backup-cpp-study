#include "deque_dll.h"

template <typename T>
DllDeque<T>::DllDeque()
:D(), n(0)
{}

template <typename T>
int DllDeque<T>::size() const
{
    return n;
}

template <typename T>
bool DllDeque<T>::empty() const
{
    return n==0;
}

template <typename T>
const T& DllDeque<T>::front() const
{
    return D.front();
}

template <typename T>
const T& DllDeque<T>::back() const
{
    return D.back();
}

template <typename T>
void DllDeque<T>::display() const
{
    D.display();
    cout<<"\n";
}

template <typename T>
void DllDeque<T>::insert_front(const T& e)
{
    D.addFront(e);
    n++;
}

template <typename T>
void DllDeque<T>::insert_back(const T& e)
{
    D.addBack(e);
    n++;
}

template <typename T>
void DllDeque<T>::remove_front()
{
    D.removeFront();
    n--;
}

template <typename T>
void DllDeque<T>::remove_back()
{
    D.removeBack();
    n--;
}