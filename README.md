# Binary Search Tree Implementation in C++

## Description
This repository contains a C++ implementation of a Binary Search Tree (BST) data structure with insertion, deletion, search, and traversal operations.

## How to Run

### Requirements
- C++17 compatible compiler (g++ or clang++ recommended)

### Compilation and Execution
1. Clone the repository:
   git clone https://github.com/ryankles/BinaryTreeImp
   cd your-repo

2. Compile the program:
   g++ -std=c++17 main.cpp -o bst

3. Run the executable:
   ./bst

### Cleanup
To remove the compiled binary:
   rm bst

## Expected Output
When you run the program, you should see:
Inorder traversal: 20 30 40 50 60 70 80 
Preorder traversal: 50 30 20 40 70 60 80 
Postorder traversal: 20 40 30 60 80 70 50 
Search for 40: Found
Search for 100: Not found
After removing 20: 30 40 50 60 70 80 
Tree cleared successfully

## Files Included
- BinaryTree.h: Header file with class declaration
- BinaryTree.tpp: Template implementation file
- main.cpp: Demonstration program
- README.md: This file
