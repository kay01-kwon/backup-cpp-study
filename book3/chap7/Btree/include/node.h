#ifndef NODE_H
#define NODE_H

#include <iostream>
#include <string>
#include <list>
using std::cout;
using std::cin;
using std::string;

template <typename T>
class Node
{
    public:
        Node();
        Node(T elem_);
        T elem;
        Node<T>* par;
        Node<T>* left;
        Node<T>* right;
};

#endif