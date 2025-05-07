# Binary Search Tree Study Report

## 1. Study Plan

**Topic Chosen:** Binary Search Trees (BST)

**Why You Chose It:**
I chose BSTs because they form the fundamental basis for more advanced tree structures while providing efficient search capabilities. I wanted to understand how the recursive structure enables O(log n) operations.

**Learning Goals:**
- Understand the BST property and its implications
- Implement core operations (insert, delete, search)
- Master tree traversal algorithms
- Analyze time/space complexity
- Build a working template implementation in C++

**Resources Used:**
- "Introduction to Algorithms" (CLRS) - Tree chapters
- University lecture notes on recursive data structures
- C++ documentation on memory management

## 2. What You Learned

**Concept Summary:**
A BST is a node-based structure where each node has at most two children. The left subtree contains only values less than the parent, while the right contains greater/equal values. This property enables efficient searching through recursive elimination of half the remaining tree at each step.

**Insights:**
- Surprise: How deletion with two children requires finding the inorder successor
- Challenge: Proper memory management in recursive destructors
- Intuitive: The traversal algorithms followed naturally from the recursive structure

**Time Complexity:**
- Search: O(log n) average, O(n) worst (unbalanced)
- Insert: O(log n) average, O(n) worst
- Delete: O(log n) average, O(n) worst
- Traversal: O(n) always
- Space: O(n) for entire tree

## 3. Implementation Summary

**Approach:**
- Used C++ templates for type flexibility
- Implemented recursive helper functions for operations
- Separated interface (h) from implementation (tpp)
- Included all three traversal methods

**Key Files/Functions:**
- BinaryTree.h: Class declaration and public interface
- BinaryTree.tpp: Complete template implementation
  - insert(): Maintains BST property during insertion
  - remove(): Handles all three deletion cases
  - traversals(): Recursive implementations
  - clear(): Memory-safe destruction
- main.cpp: Demonstration of all functionality

**Sample Input & Output:**
Input:
tree.insert(50);
tree.insert(30);
tree.insert(20);
tree.remove(20);
tree.inorder();

Output:
20 30 40 50 60 70 80 (initial inorder)
30 40 50 60 70 80 (after deletion)

## 4. Reflection

**Interesting/Difficult Aspects:**
Most interesting was seeing how the recursive structure naturally implements the algorithms. Most difficult was handling all edge cases in deletion while avoiding memory leaks.

**Future Applications:**
- Database indexing
- Game decision trees
- As a foundation for learning AVL/Red-Black trees

**Would Choose Again?**
Yes, but next time I would extend it to a self-balancing variant to maintain O(log n) guarantees.