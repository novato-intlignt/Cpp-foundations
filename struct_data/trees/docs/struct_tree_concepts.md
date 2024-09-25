# Trees in Computer Science

## Elements of a Tree
- **Node**
  - Contains data.
  - Has references (pointers) to child nodes.
- **Root**
  - The topmost node in the tree.
  - The starting point for traversals.
- **Leaf**
  - A node with no children.
- **Edge**
  - Connection between two nodes.
- **Parent/Child**
  - A parent has references to its child nodes.
- **Subtree**
  - A portion of a tree that is a tree itself.
- **Height**
  - The number of edges in the longest path from the root to a leaf.
- **Depth**
  - The distance from the root to a node.

## Types of Trees
- **Binary Tree**
  - Each node has at most two children (left and right).
  - Simple structure used for search, sorting, etc.
- **Binary Search Tree (BST)**
  - A binary tree where left children are less than the parent, and right children are greater.
- **B-Tree**
  - A balanced tree used for disk storage and databases.
  - All leaf nodes are at the same level.
  - Internal nodes can have multiple children.
- **B+ Tree**
  - Variation of B-tree.
  - Internal nodes only store keys, while all values are stored in leaf nodes.
  - Supports sequential and range queries.

## Characteristics of Trees
- **Balanced vs. Unbalanced**
  - Balanced trees maintain their height logarithmic to the number of nodes, ensuring efficient operations.
  - Unbalanced trees can degrade into linear structures, making operations less efficient.
- **Full Binary Tree**
  - Every node has 0 or 2 children.
- **Complete Binary Tree**
  - All levels are completely filled except possibly the last, which is filled from left to right.

## Binary Tree Operations
- **Insertion**
  - Add a value while maintaining the binary search property.
- **Search**
  - Check if a value exists in the tree.
- **Deletion**
  - Remove a node while preserving the binary search property.
- **Traversal**
  - **In-order**: Left subtree -> Root -> Right subtree
  - **Pre-order**: Root -> Left subtree -> Right subtree
  - **Post-order**: Left subtree -> Right subtree -> Root

## Tree Traversals in C++
```cpp
void inOrder(Node* root) {
    if (root != nullptr) {
        inOrder(root->left);
        std::cout << root->data << " ";
        inOrder(root->right);
    }
}

void preOrder(Node* root) {
    if (root != nullptr) {
        std::cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node* root) {
    if (root != nullptr) {
        postOrder(root->left);
        postOrder(root->right);
        std::cout << root->data << " ";
    }
}

