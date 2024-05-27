#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

template <typename T>
struct DNode{
    DNode<T>* prev;
    DNode<T>* next;
    T elem;
};

template <typename T>
class DLinkedList{

    public:

        // Constructor
        DLinkedList();

        // Destructor
        ~DLinkedList();

        bool empty() const;

        const T& front() const;
        const T& back() const;

        void addFront(const T& e);
        void addBack(const T& e);

        void removeFront();
        void removeBack();


        int size() const;

        void display() const;

    private:
        DNode<T>* header;
        DNode<T>* trailer;
        int N;

    void add(DNode<T>* v, const T& e);
    void remove(DNode<T>* v);
};



#endif
       