#include "LL.h"

template <typename T>
Node<T>::Node(T value)
{
    this->value = value;
}

template <typename T>
LinkedList<T>::LinkedList(T value)
:length(1)
{
    Node<T>* newNode = new Node<T>(value);
    head = newNode;
    tail = newNode;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    Node<T>* temp = head;
    while(head == NULL)
    {
        head = head->next;
        delete temp;
        temp = head;
    }
}

template <typename T>
void LinkedList<T>::printList()
{
    Node<T>* temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}

template <typename T>
void LinkedList<T>::getHead()
{
    if(head == NULL)
        cout<<"Head: nullptr"<<endl;
    else
        cout<<"Head: "<<head->value<<endl;
}

template <typename T>
void LinkedList<T>::getTail()
{
    if(tail == NULL)
        cout<<"Tail: nullptr"<<endl;
    else
        cout<<"Tail: "<<tail->value<<endl;
}

template <typename T>
void LinkedList<T>::getLength()
{
    cout<<"Length: "<<length<<endl;
}

template <typename T>
void LinkedList<T>::append(T value)
{
    Node<T>* newNode = new Node<T>(value);
    
    if(length == 0)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
    length++;
}

template <typename T>
void LinkedList<T>::deleteLast()
{
    if(length == 0)
        return;

    Node<T>* temp = head;

    if(length == 1)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        Node<T>* pre = head;

        while(temp->next)
        {
            pre = temp;
            temp = temp->next;
        }
        tail = pre;
        tail->next = NULL;
    }
    delete temp;
    length--;
}

template <typename T>
void LinkedList<T>::prepend(T value)
{
    Node<T>* newNode = new Node<T>(value);
    
    if(length == 0)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
    length++;
}

template <typename T>
void LinkedList<T>::deleteFirst()
{
    if(length == 0)
        return;
    Node<T>* temp = head;
    if(length == 1)
    {
        head = NULL;
        tail = NULL;
    }
    else
    {
        head = head->next;
    }
    delete temp;
    length--;
}

template <typename T>
Node<T>* LinkedList<T>::get(int index)
{
    if(index < 0 || index >= length)
        return NULL;

    Node<T>* temp = head;
    
    for(int i = 0; i < index; i++)
        temp = temp->next;
    return temp;
}

template <typename T>
bool LinkedList<T>::set(int index, T value)
{
    Node<T>* temp = get(index);
    if(temp)
    {
        temp->value = value;
        return true;
    }
    return false;
}

template <typename T>
bool LinkedList<T>::insert(int index, T value)
{
    if(index < 0 || index > length)
        return false;

    if(index == 0)
    {
        prepend(value);
        return true;
    }

    
    if(index == length){
        append(value);
        return true;
    }

    Node<T>* newNode = new Node<T>(value);
    Node<T>* temp = get(index-1);
    newNode->next = temp->next;
    temp->next = newNode;
    length++;
    return true;

}

template <typename T>
void LinkedList<T>::deleteNode(int index)
{
    if(index < 0 || index > length)
        return;
    
    if(index == 0){
        return deleteFirst();
    }

    if(index == length-1){
        return deleteLast();
    }

    Node<T>* prev = get(index-1);
    Node<T>* temp = prev->next;

    prev->next = temp->next;
    delete temp;
    length--;
}

template <typename T>
void LinkedList<T>::reverse()
{
    Node<T>* temp = head;
    head = tail;
    tail = temp;

    Node<T>* after = NULL;
    Node<T>* before = NULL;

    for(int i = 0; i < length; i++)
    {
        after = temp->next;
        temp->next = before;
        before = temp;
        temp = after;
    }

}