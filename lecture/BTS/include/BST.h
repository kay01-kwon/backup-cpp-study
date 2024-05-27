#ifndef BST_H
#define BST_H
#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

template <typename T>
class Node{
    public:
        T value;
        Node<T>* left;
        Node<T>* right;
        Node<T>(T value);
};


template <typename T>
class BinarySearchTree{
    public:
        Node<T>* root;

    public:
        BinarySearchTree();

        bool insert(T value);

        bool contains(T value);

};

#endif