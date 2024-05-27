#include "singly_linked_list.h"

template <typename T>
SLinkedList<T>::SLinkedList()
:head(NULL)
{
    N = 0;
}

template <typename T>
SLinkedList<T>::~SLinkedList()
{
    while (!empty())
        removeFront();
}

template <typename T>
bool SLinkedList<T>::empty() const
{
    return head == NULL;
}

template <typename T>
const T& SLinkedList<T>::Front() const
{
    return head->elem;
}

template <typename T>
void SLinkedList<T>::addFront(const T& e)
{
    SNode<T>* v = new SNode<T>;
    v->elem = e;
    v->next = head;
    head = v;
    N++;
}

template <typename T>
void SLinkedList<T>::removeFront()
{
    SNode<T>*old = head;
    head = old->next;
    delete old;
    N--;
}

template <typename T>
int SLinkedList<T>::size() const
{
    return N;
}

template <typename T>
void SLinkedList<T>::display()
{
    SNode<T>* temp = head;
    while (temp != NULL)
    {
        cout<< temp->elem<<" ";
        temp = temp->next;
    }
    
}