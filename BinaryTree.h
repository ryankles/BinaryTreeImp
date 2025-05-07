#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <iostream>

template <typename T>
class BinaryTree
{
private:
    struct Node
    {
        T data;
        Node *left;
        Node *right;

        Node(T val) : data(val), left(nullptr), right(nullptr) {}
    };

    Node *root;

    // Helper functions
    void insert(Node *&node, T val);
    void inorder(Node *node) const;
    void preorder(Node *node) const;
    void postorder(Node *node) const;
    Node *search(Node *node, T val) const;
    Node *findMin(Node *node) const;
    void remove(Node *&node, T val);
    void clear(Node *&node);

public:
    BinaryTree() : root(nullptr) {}
    ~BinaryTree();

    // Public interface
    void insert(T val);
    void inorder() const;
    void preorder() const;
    void postorder() const;
    bool search(T val) const;
    void remove(T val);
    void clear();
    bool isEmpty() const;
};

#include "BinaryTree.tpp"

#endif // BINARYTREE_H