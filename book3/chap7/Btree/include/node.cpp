#include "node.h"

template <typename T>
Node<T>::Node()
:par(NULL), left(NULL), right(NULL)
{
}

template <typename T>
Node<T>::Node(T elem_)
:par(NULL), left(NULL), right(NULL)
{
    elem = elem_;
}