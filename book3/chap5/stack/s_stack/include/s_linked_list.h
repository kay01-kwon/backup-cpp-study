#ifndef S_LINKED_LIST_H
#define S_LINKED_LIST_H
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;


template <typename T>
struct SNode
{
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

        const T& front() const;

        void addFront(const T& e);

        void removeFront();

        int size() const;

        void display() const;

        private:
            SNode<T>* head;
            int N;

};
#endif