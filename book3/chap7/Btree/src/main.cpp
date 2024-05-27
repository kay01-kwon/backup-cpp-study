#include "binary_tree.cpp"

int main()
{
    BinaryTree<int> bt_node;

    bt_node.insert(10);
    bt_node.insert(6);
    bt_node.insert(14);
    bt_node.insert(5);
    bt_node.insert(8);
    bt_node.insert(11);
    bt_node.insert(18);
        
    bt_node.preOrderTraversal();
    cout<<"\n";


    return EXIT_SUCCESS;
}