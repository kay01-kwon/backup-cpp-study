#ifndef DLL_H
#define DLL_H
#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

template <typename T>
class Node{
    public:
        Node(T value);
        Node<T>* next;        
        Node<T>* prev;
        T value;
};

template <typename T>
class DoublyLinkedList{
    private:
        Node<T>* head;
        Node<T>* tail;
        int length;

    public:
        DoublyLinkedList(T value);
        
        void printList();

        void getHead();

        void getTail();

        void getLength();

        void append(T value);

        void deleteLast();

        void prepend(T value);

        void deleteFirst();

        Node<T>* get(int index);
        
        bool set(int index, T value);

        bool insert(int index, T value);

        void deleteNode(int index);
};

#endif