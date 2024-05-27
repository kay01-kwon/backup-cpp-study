#ifndef STACK_CLASS_H
#define STACK_CLASS_H

#include <iostream>
#include <string>
#include "stack_error.h"

using std::string;
using std::cout;
using std::endl;


template <class T>
class ArrayStack
{
    public:
        ArrayStack(int cap = DEF_CAPACITY);
        int size() const;
        bool empty() const;
        const T& top() const;
        void display() const;

        void push(const T& e);
        void pop();

    private:
        T* Stack;
        int capacity;
        int t;
        enum {DEF_CAPACITY = 100};
};


#endif