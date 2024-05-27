#ifndef S_STACK_H
#define S_STACK_H

#include "s_linked_list.cpp"


template <typename T>
class LinkedStack
{
    public:
        LinkedStack();
        
        int size() const;
        bool empty() const;
        const T& top() const;
        void display() const;


        void push(const T& e);
        void pop();

    private:
        SLinkedList<T> S;
        int n;

};


#endif