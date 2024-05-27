#include "array_vector.h"

template <typename T>
ArrayVector<T>::ArrayVector()
:capacity(0), n(0), A(NULL)
{

}

template <typename T>
int ArrayVector<T>::size() const
{
    return n;
}

template <typename T>
bool ArrayVector<T>::empty() const
{
    return size() == 0;
}

template <typename T>
T& ArrayVector<T>::operator[](int i)
{
    return A[i];
}

template <typename T>
T& ArrayVector<T>::at(int i)
{
    return A[i];
}

template <typename T>
void ArrayVector<T>::erase(int i)
{
    for(int j = i + 1; j < n; j++)
        A[j-1] = A[j];
    n--;
}

template <typename T>
void ArrayVector<T>::insert(int i, const T& e)
{
    if(n >= capacity)
        reserve(std::max(1,2*capacity));
    for(int j = n-1; j >= i; j--)
        A[j+1] = A[j];
    A[i] = e;
    n++;
}

template <typename T>
void ArrayVector<T>::reserve(int N)
{
    if(capacity >= N)
        return;
    
    T* B = new T[N];
    
    for(int j = 0; j < n; j++)
        B[j] = A[j];
    
    if(A != NULL)
        delete [] A;

    A = B;
    capacity = N;

}