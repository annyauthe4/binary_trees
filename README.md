**Binary Tree Data Structure**

**Table of Contents**
Introduction
Key Features
Types of Binary Trees
Operations
Time Complexity
Example Usage
Applications
License


**Introduction**
A Binary Tree is a hierarchical data structure in which each node has at most two children, commonly referred to as the left child and the right child. It is widely used in computing for efficient searching, sorting, and organizing hierarchical data.

**Key Features**
Each node contains:
A value or key.
References (or pointers) to the left and right child nodes.
The topmost node is called the root.
Nodes with no children are called leaf nodes.


**Types of Binary Trees**
1. Full Binary Tree
Every node has either 0 or 2 children.
2. Complete Binary Tree
All levels except the last are completely filled, and nodes in the last level are as far left as possible.
3. Perfect Binary Tree
All internal nodes have exactly 2 children, and all leaf nodes are at the same level.
4. Balanced Binary Tree
The height difference between the left and right subtrees of any node is at most 1.
5. Binary Search Tree (BST)
A binary tree in which:
All nodes in the left subtree have smaller values than the root.
All nodes in the right subtree have larger values than the root.

**Operations**
1. Traversal
In-order (Left, Root, Right): Produces sorted output in BST.
Pre-order (Root, Left, Right): Useful for copying the tree.
Post-order (Left, Right, Root): Useful for deleting the tree.
Level-order: Visits nodes level by level (BFS).

2. Search
Locate a node based on its value. Efficient in Binary Search Trees.

3. Insertion
Add a new node while maintaining tree properties (e.g., BST rules).

4. Deletion
Remove a node while maintaining tree structure. May involve:
Replacing with the in-order successor (smallest node in the right subtree).
Replacing with the in-order predecessor (largest node in the left subtree).

5. Height Calculation
Compute the height of the tree (longest path from root to a leaf).

6. Balance Checking
Determine if the tree is balanced (for AVL or Balanced Trees).
