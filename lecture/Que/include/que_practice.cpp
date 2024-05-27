#include "que_practice.h"

template <typename T>
Node<T>::Node(T value){
    this->value = value;
    next = nullptr;
}

template <typename T>
Que<T>::Que(T value){
    Node<T>* newNode = new Node<T>(value);
    first = newNode;
    last = newNode;
    length = 1;
}

template <typename T>
void Que<T>::printQue(){
    Node<T>* temp = first;
    while(temp){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}

template <typename T>
void Que<T>::getFirst(){
    cout<<"First: "<<first->value<<endl;
}

template <typename T>
void Que<T>::getLast(){
    cout<<"Last: "<<last->value<<endl;
}

template <typename T>
void Que<T>::getLength(){
    cout<<"Length: "<<length<<endl;
}

template <typename T>
void Que<T>::enque(T value){
    Node<T>* newNode = new Node<T>(value);
    if(length == 0){
        first = newNode;
        last = newNode;
    }else{
        last->next = newNode;
        last = newNode;
    }
    length++;
}

template <typename T>
T Que<T>::deque(){
    if(length == 0) return INT32_MIN;
    Node<T>* temp = first;
    T dequeuedValue = first->value;
    if(length == 1){
        first = nullptr;
        last = nullptr;
    }else{
        first = first->next;
    }
    delete temp;
    length--;
    return dequeuedValue;
}