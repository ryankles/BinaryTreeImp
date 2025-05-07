#include <iostream>
#include "BinaryTree.h"

int main()
{
    BinaryTree<int> tree;

    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    std::cout << "Inorder traversal: ";
    tree.inorder();

    std::cout << "Preorder traversal: ";
    tree.preorder();

    std::cout << "Postorder traversal: ";
    tree.postorder();

    std::cout << "Search for 40: " << (tree.search(40) ? "Found" : "Not found") << std::endl;
    std::cout << "Search for 100: " << (tree.search(100) ? "Found" : "Not found") << std::endl;

    tree.remove(20);
    std::cout << "After removing 20, Inorder traversal: ";
    tree.inorder();

    tree.clear();
    std::cout << "Tree is empty: " << (tree.isEmpty() ? "Yes" : "No") << std::endl;

    return 0;
}