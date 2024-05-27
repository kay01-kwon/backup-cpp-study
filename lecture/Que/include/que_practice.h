#ifndef QUE_PRACTICE
#define QUE_PRACTICE
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
class Que{
    private:
        Node<T>* first;
        Node<T>* last;
        int length;

    public:
        Que(T value);

        void printQue();

        void getFirst();

        void getLast();

        void getLength();

        void enque(T value);

        T deque();
};

#endif