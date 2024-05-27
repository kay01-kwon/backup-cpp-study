#include "c_array.h"

template <class T>
CArray<T>::CArray()
:N(10), f(0), r(0), n(0)
{
    A = new T[N];
}

template <class T>
CArray<T>::CArray(int M)
:N(M), f(0), r(0), n(0)
{
    A = new T[N];
}

template <class T>
int CArray<T>::size() const
{
    return n;
}

template <class T>
bool CArray<T>::empty() const
{
    return size() == 0;
}

template <class T>
T CArray<T>::front() const
{
    cout<<A[f]<<" \n";
}

template <class T>
void CArray<T>::display() const
{
    for(int i = 0; i < size(); i++)
    {
        int j = (i + f - 1)%N;
        cout<<A[j]<<" ";
    }
    cout<<"\n";
}

template <class T>
void CArray<T>::dequeue()
{
    f = (f+1)%N;
    cout<<" f: "<<f<<" ";
    --n;
}

template <class T>
void CArray<T>::enqueue(const T& e)
{
    A[r] = e;
    r = (r+1)%N;
    ++n;
}

template <class T>
CArray<T>::~CArray()
{
    delete [] A;
}