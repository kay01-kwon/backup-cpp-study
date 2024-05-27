#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename T>
struct SNode{
    SNode<T>* next;
    T elem;
};

template <typename T>
class SLinkedList{

    public:
        
        // Constructor
        SLinkedList();

        // Destructor
        ~SLinkedList();
        
        bool empty() const;

        const T& Front() const;

        void addFront(const T& e);

        void removeFront();

        int size() const;

        void display();

    private:
        SNode<T>* head;
        int N;
};



#endif