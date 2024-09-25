
# Binary Tree in C++
## Node Definition
- Each node contains:
  - data (integer value)
  - pointer to left child (Node* left)
  - pointer to right child (Node* right)
  - Constructor to initialize node with value

## Insert Function
- Recursive function to insert values in the tree
  - Base case: if the tree is empty (root is nullptr)
    - Create a new node
  - If value is less than current node's data
    - Insert into the left subtree
  - If value is greater than or equal to current node's data
    - Insert into the right subtree

## Search Function
- Recursive function to search for a value
  - If the tree is empty (root is nullptr)
    - Return false
  - If the current node contains the value
    - Return true
  - If value is less than current node's data
    - Search in the left subtree
  - If value is greater than current node's data
    - Search in the right subtree

## Find Minimum Function
- Used to find the node with the smallest value in the tree
  - Traverse the left subtree until nullptr is found
  - Return the minimum node

## Delete Function
- Recursive function to delete a node from the tree
  - If the tree is empty (root is nullptr)
    - Return root
  - If value is less than current node's data
    - Delete from the left subtree
  - If value is greater than current node's data
    - Delete from the right subtree
  - If the node to delete is found:
    - Case 1: Node has no children (leaf)
      - Delete the node
    - Case 2: Node has one child
      - Replace the node with its child
    - Case 3: Node has two children
      - Find the in-order successor (smallest node in the right subtree)
      - Replace current node's data with successor's data
      - Delete the successor node

## Tree Traversals
### In-Order Traversal
- Left subtree -> Node -> Right subtree
- Outputs values in ascending order

### Pre-Order Traversal
- Node -> Left subtree -> Right subtree
- Outputs values in the order they are inserted

### Post-Order Traversal
- Left subtree -> Right subtree -> Node
- Useful for deleting or processing nodes

## Main Function
- Creates a binary tree with the following structure:
  - Inserts values: 50, 30, 20, 40, 70, 60, 80
  - Performs in-order, pre-order, and post-order traversals
  - Searches for value 40
  - Deletes node 20 and shows the in-order traversal after deletion
