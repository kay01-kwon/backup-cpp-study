#ifndef STACK_PRACTICE
#define STACK_PRACTICE
#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

template <typename T>
class Node{
    public:
        Node(T value);
        T value;
        Node<T>* next;
};

template <typename T>
class Stack{
    private:
        Node<T>* top;
        int height;

    public:
        Stack(T value);

        void printStack();

        void getTop();

        void getHeight();

        void push(T value);

        T pop();
};

#endif