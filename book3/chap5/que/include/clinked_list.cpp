#include "clinked_list.h"

template <typename T>
CList<T>::CList()
:cursor(NULL), n(0)
{
}

template <typename T>
CList<T>::~CList()
{
    while(!empty())
        remove();
}

template <typename T>
bool CList<T>::empty() const
{
    return cursor == NULL;
}

template <typename T>
const T& CList<T>::front() const
{
    return cursor->elem;
}

template <typename T>
const T& CList<T>::back() const
{
    return cursor->next->elem;
}

template <typename T>
int CList<T>::size() const
{
    return n;
}

template <typename T>
void CList<T>::display() const
{
    CNode<T>* temp;
    temp = cursor->next;
    for(int i = 0; i < size(); i++)
    {
        cout<<"[";
        cout<<temp->elem<<"] ";
        temp = temp->next;
    }
}

template <typename T>
void CList<T>::advance()
{
    cursor = cursor->next;
}

template <typename T>
void CList<T>::add(const T& e)
{
    CNode<T>* v = new CNode<T>;
    v->elem = e;
    
    if(cursor == NULL)
    {
        v->next = v;
        cursor = v;
    }
    else
    {
        v->next = cursor->next;
        cursor->next = v;
    }
    ++n;
}

template <typename T>
void CList<T>::remove()
{
    CNode<T>* old = cursor->next;
    if(old == cursor)
        cursor = NULL;
    else
        cursor->next = old->next;

    --n;
    delete old;
}