#include "cll_queue.h"

template <typename T>
CllQueue<T>::CllQueue()
:C(),n(0)
{}

template <typename T>
int CllQueue<T>::size() const
{
    return n;
}

template <typename T>
bool CllQueue<T>::empty() const
{
    return n == 0;
}

template <typename T>
const T& CllQueue<T>::front() const
{
    return C.front();
}

template <typename T>
void CllQueue<T>::display() const
{
    C.display();
    cout<<"\n";
}

template <typename T>
void CllQueue<T>::enqueue(const T& e)
{
    C.add(e);
    C.advance();
    n++;
}

template <typename T>
void CllQueue<T>::dequeue()
{
    C.remove();
    n--;
}