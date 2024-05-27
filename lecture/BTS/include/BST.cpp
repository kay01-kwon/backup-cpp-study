#include "BST.h"

template <typename T>
Node<T>::Node(T value)
{
    this->value = value;
    left = nullptr;
    right = nullptr;
}

template <typename T>
BinarySearchTree<T>::BinarySearchTree()
{
    root = nullptr;
}

template <typename T>
bool BinarySearchTree<T>::insert(T value)
{
    Node<T>* newNode = new Node<T>(value);
    if(root == nullptr){
        root = newNode;
        return true;
    }
    Node<T>* temp = root;

    while(true){
        if(newNode->value == temp->value)
            return false;
        if(newNode->value < temp->value){
            if(temp->left == nullptr){
                temp->left = newNode;
                return true;
            }
            temp = temp->left;
        }else{
            if(temp->right == nullptr){
                temp->right = newNode;
                return true;
            }
            temp = temp->right;
        }
    }
}

template <typename T>
bool BinarySearchTree<T>::contains(T value)
{
    // if(root == nullptr)
    //     return false; -> Unnecessary
    
    Node<T>* temp = root;
    while (temp)
    {
        if(value < temp->value)
            temp = temp->left;
        else if(value > temp->value)
            temp = temp->right;
        else
            return true;
    }
    return false;   
}