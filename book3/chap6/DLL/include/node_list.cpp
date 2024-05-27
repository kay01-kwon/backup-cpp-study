#include "node_list.h"

template <typename T>
T& NodeList<T>::Iterator::operator*()
{
    return v->elem;
}

template <typename T>
bool NodeList<T>::Iterator::operator==(const NodeList<T>::Iterator& p) const
{
    return v==p.v;
}

template <typename T>
bool NodeList<T>::Iterator::operator!=(const NodeList<T>::Iterator& p) const
{
    return v!=p.v;
}

template <typename T> 
typename NodeList<T>::Iterator& NodeList<T>::Iterator::operator++()
{
    v = v->next;
    return *this;
}

template <typename T> 
typename NodeList<T>::Iterator& NodeList<T>::Iterator::operator--()
{
    v = v->prev;
    return *this;
}


template <typename T>
NodeList<T>::Iterator::Iterator(Node* u)
{
    v = u;
}

template <typename T>
NodeList<T>::NodeList()
:n(0)
{
    header = new Node;
    trailer = new Node;
    header->next = trailer;
    trailer->prev = header;
}

template <typename T>
NodeList<T>::~NodeList()
{
    while(!empty())
    {
        erase_front();
    }

    delete trailer;
    
}

template <typename T>
int NodeList<T>::size() const
{
    return n;
}

template <typename T>
bool NodeList<T>::empty() const
{
    return size()==0;
}

template <typename T>
typename NodeList<T>::Iterator NodeList<T>::begin() const
{
    return NodeList<T>::Iterator(header->next);
}

template <typename T>
typename NodeList<T>::Iterator NodeList<T>::end() const
{
    return NodeList<T>::Iterator(trailer);
}

template <typename T>
void NodeList<T>::insert(const NodeList<T>::Iterator& p, const T& e)
{
    // p's node
    NodeList<T>::Node* w = p.v;
    // p's predecessor    
    NodeList<T>::Node* u = w->prev;
    NodeList<T>::Node* v = new NodeList<T>::Node;
    
    v->elem = e;
    v->next = w;
    w->prev = v;
    v->prev = u;
    u->next = v;
    n++;
}

template <typename T>
void NodeList<T>::erase(const NodeList<T>::Iterator& p)
{
    Node* v = p.v;
    Node* w = v->next;
    Node* u = v->prev;

    u->next = w;
    w->prev = u;
    delete v;
    n--;
}

template <typename T>
void NodeList<T>::insert_front(const T& e)
{
    insert(begin(),e);
}

template <typename T>
void NodeList<T>::insert_back(const T& e)
{
    insert(end(),e);
}

template <typename T>
void NodeList<T>::erase_front()
{
    erase(begin());
}

template <typename T>
void NodeList<T>::erase_back()
{
    erase(--end());
}