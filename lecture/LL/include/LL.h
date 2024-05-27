#ifndef LL_H
#define LL_H
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

template <typename T>
class Node{
    public:
        Node(T value);
        Node<T>* next;
        T value;
};

template <typename T>
class LinkedList
{
    private:
        Node<T>* head;
        Node<T>* tail;
        int length;

    public:
    // Constructor
        LinkedList(T value);

    // Destructor
        ~LinkedList();

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

        void reverse();

};



#endif