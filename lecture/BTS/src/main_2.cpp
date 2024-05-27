#include "BST.cpp"

int main()
{
    BinarySearchTree<int>* myBST = new BinarySearchTree<int>();

    myBST->insert(47);
    myBST->insert(21);
    myBST->insert(76);
    myBST->insert(18);
    myBST->insert(52);
    myBST->insert(82);
    myBST->insert(27);


    cout<<myBST->root->left->right->value<<endl;
}