#include "DLL.h"

template <typename T>
Node<T>::Node(T value)
{
    this->value = value;
    this->next = NULL;
    this->prev = NULL;
}

template <typename T>
DoublyLinkedList<T>::DoublyLinkedList(T value)
:length(1)
{
    Node<T>* newNode = new Node<T>(value);
    head = newNode;
    tail = newNode;
}

template <typename T>
void DoublyLinkedList<T>::printList()
{
    Node<T>* temp = head;
    while (temp)
    {
        cout<<temp->value<<endl;
        temp = temp->next;
    }
    
}

template <typename T>
void DoublyLinkedList<T>::getHead()
{
    cout<<"Head: "<<head->value<<endl;
}

template <typename T>
void DoublyLinkedList<T>::getTail()
{
    cout<<"Tail: "<<tail->value<<endl;
}

template <typename T>
void DoublyLinkedList<T>::getLength()
{
    cout<<"Length: "<<length<<endl;
}

template <typename T>
void DoublyLinkedList<T>::append(T value)
{
    Node<T>* newNode = new Node<T>(value);
    if(length == 0){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    length++;
}

template <typename T>
void DoublyLinkedList<T>::deleteLast()
{
    if(length == 0)
        return;

    Node<T>* temp = tail;

    if(length == 1){
        head = nullptr;
        tail = nullptr;
    }else{
        tail = tail->prev;
        tail->next = nullptr;
    }
    delete temp;
    length--;
}

template <typename T>
void DoublyLinkedList<T>::prepend(T value)
{
    Node<T>* newNode = new Node<T>(value);
    if(length == 0){
        head = nullptr;
        tail = nullptr;
    }else{
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    length++;
}

 template <typename T>
 void DoublyLinkedList<T>::deleteFirst()
 {
    if(length == 0)
        return;

    Node<T>* temp = head;
    if(length == 1){
        head = nullptr;
        tail = nullptr;
    }else{
        head = head->next;
        head->prev = nullptr;
    }
    delete temp;
    length--;
 }

template <typename T>
Node<T>* DoublyLinkedList<T>::get(int index)
{
    if(index < 0 || index >= length)
        return nullptr;

    Node<T>* temp = head;

    if(index < length/2){
        for(int i = 0; i < index; i++){
            temp = temp->next;
        }
    }else{
        temp = tail;
        for(int i = length-1; i > index; i--){
            temp = temp->prev;
        }
    }
    return temp;
}

template <typename T>
bool DoublyLinkedList<T>::set(int index, T value)
{
    Node<T>* temp = get(index);
    
    if(temp){
        temp->value = value;
        return true;
    }
    return false;
}

template <typename T>
bool DoublyLinkedList<T>::insert(int index, T value)
{
    if(index < 0 || index > length)
        return false;

    if(index == 0){
        prepend(value);
        return true;
    }
    if(index == length){
        append(value);
        return true;
    }

    Node<T>* newNode = new Node<T>(value);
    Node<T>* before = get(index-1);
    Node<T>* after = before->next;
    newNode->prev = before;
    newNode->next = after;
    before->next = newNode;
    after->prev = newNode;
    length++;

    return true;
}

template <typename T>
void DoublyLinkedList<T>::deleteNode(int index)
{
    if(index < 0 || index >= length) 
        return;
    if(index == 0)
        return deleteFirst();
    if(index == length-1)
        return deleteLast();
    
    Node<T>* temp = get(index);

    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;
    delete temp;
    length--;
}