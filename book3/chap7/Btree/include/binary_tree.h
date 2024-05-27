#ifndef BINARY_TREE_H
#define BINARY_TREE_H
#include "node.cpp"

template <typename T>
class BinaryTree{

    public:

        BinaryTree();

        void insert(T data);

        void insert(Node<T>* leaf, T data);

        void preOrderTraversal();

        void preOrderTraversal(Node<T>* node_);
    
        ~BinaryTree();

    private:
    
        Node<T>* root;

        void destroy_tree();

        void destroy_tree(Node<T>* leaf);

};

#endif