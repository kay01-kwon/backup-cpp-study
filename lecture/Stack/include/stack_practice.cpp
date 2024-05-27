#include "stack_practice.h"

template <typename T>
Node<T>::Node(T value){
    this->value = value;
    next = nullptr;
}

template <typename T>
Stack<T>::Stack(T value){
    Node<T>* newNode = new Node<T>(value);
    top = newNode;
    height = 1;
}

template <typename T>
void Stack<T>::printStack(){
    Node<T>* temp = top;
    while(temp){
        cout<<temp->value<<endl;
        temp = temp->next;
    }
}

template <typename T>
void Stack<T>::getTop(){
    cout<<"Top: "<<top->value<<endl;
}

template <typename T>
void Stack<T>::getHeight(){
    cout<<"Height: "<<height<<endl;
}

template <typename T>
void Stack<T>::push(T value){
    Node<T>* newNode = new Node<T>(value);
        newNode->next = top;
        top = newNode;
    height++;
}

template <typename T>
T Stack<T>::pop(){
    if (height == 0) return INT32_MIN;

    Node<T>* temp = top;
    int poppedValue = top->value;
    top = top->next;
    delete temp;
    height--;

    return poppedValue;
}