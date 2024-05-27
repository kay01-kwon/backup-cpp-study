#include "binary_tree.h"

template <typename T>
BinaryTree<T>::BinaryTree()
:root(NULL)
{

}

template <typename T>
void BinaryTree<T>::insert(T data)
{
    if(root != NULL)
    {
        insert(root, data);
    }
    else
    {
        root = new Node<T>;
        root->elem = data;
        root->left = NULL;
        root->right = NULL;
        root->par = NULL;
    }


}

template <typename T>
void BinaryTree<T>::insert(Node<T>* leaf, T data)
{

    if(data < leaf->elem)
    {
        if(leaf->left != NULL)
            insert(leaf->left, data);
        else
        {
            leaf->left = new Node<T>;
            leaf->left->elem = data;
            leaf->left->left = NULL;
            leaf->left->right = NULL;
        }
    }
    else
    {
        if(leaf->right != NULL)
            insert(leaf->right, data);
        else
        {
            leaf->right = new Node<T>;
            leaf->right->elem = data;
            leaf->right->right = NULL;
            leaf->right->left = NULL;
        }
    }

}

template <typename T>
void BinaryTree<T>::preOrderTraversal()
{
    preOrderTraversal(root);
}

template <typename T>
void BinaryTree<T>::preOrderTraversal(Node<T>* node)
{
    if(node == NULL)
        return;

    cout<<node->elem<<" ";

    preOrderTraversal(node->left);

    preOrderTraversal(node->right);
}

template <typename T>
BinaryTree<T>::~BinaryTree()
{
    destroy_tree();
}

template <typename T>
void BinaryTree<T>::destroy_tree()
{
    destroy_tree(root);
}

template <typename T>
void BinaryTree<T>::destroy_tree(Node<T>* leaf)
{
    if(leaf != NULL)
    {
        destroy_tree(leaf->left);
        destroy_tree(leaf->right);
        delete leaf;
    }
}