#include "doubly_linked_list.h"

template <typename T>
DLinkedList<T>::DLinkedList()
:N(0)
{
    header = new DNode<T>;
    trailer = new DNode<T>;
    // Have them point to each other
    header->next = trailer;
    trailer->prev = header;
}

template <typename T>
DLinkedList<T>::~DLinkedList()
{
    while (!empty())
    {
        removeFront();
    }
    delete trailer;
}

template <typename T>
bool DLinkedList<T>::empty() const
{
    return header->next == trailer;
}

template <typename T>
const T& DLinkedList<T>::front() const
{
    return header->next->elem;
}

template <typename T>
const T& DLinkedList<T>::back() const
{
    return trailer->prev->elem;
}

template <typename T>
void DLinkedList<T>::addFront(const T& e)
{
    add(header->next,e);
    N++;
}

template <typename T>
void DLinkedList<T>::addBack(const T& e)
{
    add(trailer,e);
    N++;
}

template <typename T>
void DLinkedList<T>::removeFront()
{
    remove(header->next);
    N--;
}

template <typename T>
void DLinkedList<T>::removeBack()
{
    remove(trailer->prev);
    N--;
}

template <typename T>
int DLinkedList<T>::size() const
{
    return N+1;
}

template <typename T>
void DLinkedList<T>::display() const
{
    DNode<T>* temp = header;
    
    int i = 0;

    while ( temp != NULL)
    {
        if(i == 0)
            cout<<"[header] ";
        else if(i < size()){
            cout<<"[";
            cout<<temp->elem<<"] ";
        }
        else{
            cout<<"[trailer]";
        }

        temp = temp->next;
        i++;
    }
    

}

template <typename T>
void DLinkedList<T>::add(DNode<T>* v, const T& e)
{
    DNode<T>* u = new DNode<T>;
    u->elem = e;
    u->next = v;
    u->prev = v->prev;
    u->prev->next = u;
    v->prev = u;
}

template <typename T>
void DLinkedList<T>::remove(DNode<T>* v)
{
    DNode<T>* u = v->prev;
    DNode<T>* w = v->next;
    u->next = w;
    w->prev = u;
    delete v;
}