# B-Trees

## Definition
- A self-balancing tree data structure that maintains sorted data and allows for efficient insertions, deletions, and searches.
- Generalizes binary search trees by allowing more than two children per node.

## Elements of B-Tree
- **Node**
  - Stores multiple keys.
  - Internal nodes contain keys for branching and pointers to children.
  - Leaf nodes can contain data or references (in B+ Trees).
- **Key**
  - Used to guide search operations.
  - A node can hold multiple keys.
- **Pointer/Child**
  - References to child nodes.
  - Each internal node has pointers to children based on key ranges.

## Characteristics
- **Balanced Tree**
  - Always balanced, with all leaves at the same level.
- **Order (m)**
  - Defines the maximum number of children a node can have (`m`).
  - A node can have at most `m-1` keys.
  - Minimum number of children for a node (except the root) is `⌈m/2⌉`.
- **Height**
  - The height of a B-tree grows logarithmically with the number of keys, ensuring efficient operations.

## Properties of B-Trees
- **Balanced**: All leaf nodes are at the same depth.
- **Efficient**: Search, insert, and delete operations have a time complexity of `O(log n)`.
- **Storage-optimized**: Designed for systems with limited memory (e.g., disks).

## Operations in B-Trees
- **Search**
  - Starts at the root and compares keys to find the appropriate child node.
  - Continues down the tree, following the key ranges, until the desired key is found or a leaf is reached.
- **Insertion**
  - Keys are inserted into the correct position in the leaf node.
  - If the node becomes full, it is split, and the middle key is promoted to the parent node.
  - Splitting can propagate upward, potentially increasing the height of the tree.
- **Deletion**
  - Deleting a key involves merging or redistributing nodes to maintain the B-tree properties.
  - Keys may be borrowed from sibling nodes, or nodes can be merged if necessary.

## Node Structure
- **Internal Node**:
  - Contains keys that divide the data space into ranges.
  - Contains pointers to child nodes.
  - Has between `⌈m/2⌉ - 1` and `m-1` keys.
- **Leaf Node**:
  - Contains the actual data or references to data (depending on whether it's a B-tree or B+ tree).
  - Has between `⌈m/2⌉ - 1` and `m-1` keys.

## Utilization of B-Trees
- **File Systems**: Used in file systems (e.g., NTFS, ext4) for efficient indexing.
- **Databases**: Utilized in databases (e.g., MySQL, PostgreSQL) to store large amounts of data and perform efficient search and range queries.
- **Indexing**: Provides efficient data retrieval and range queries, making it suitable for indexing on disk.

## B+ Tree (Variation of B-Tree)
- **Difference from B-Tree**:
  - Internal nodes only store keys, while leaf nodes store actual data.
  - Leaf nodes are linked, allowing efficient sequential traversal.
- **Sequential Search**:
  - Allows ordered traversal through the linked leaf nodes, enabling efficient access to sorted data.
- **Range Queries**:
  - Efficiently supports range queries, as leaf nodes are linked together.

## B-Tree vs. B+ Tree
- **B-Tree**:
  - Internal nodes contain keys and data.
  - Suitable for general-purpose data storage and retrieval.
- **B+ Tree**:
  - Internal nodes contain only keys; data is stored in leaf nodes.
  - Better for databases and file systems where sequential and range queries are critical.

## Advantages of B-Trees
- **Balanced**: Always remains balanced, ensuring `O(log n)` performance for all operations.
- **Efficient Disk Usage**: Reduces disk I/O by keeping the tree height small.
- **Dynamic**: Grows and shrinks dynamically as keys are inserted or deleted.
- **Scalable**: Suitable for handling large datasets stored on disks or other secondary storage.

## B-Tree Operations in C++
```cpp
struct BTreeNode {
    int* keys;  // Array of keys
    BTreeNode** children;  // Array of child pointers
    int numKeys;  // Number of keys in the node
    bool isLeaf;  // True if the node is a leaf node

    BTreeNode(int t, bool leaf);
    void insertNonFull(int key);
    void splitChild(int i, BTreeNode* y);
    void traverse();
    BTreeNode* search(int key);
};

class BTree {
    BTreeNode* root;
    int t;  // Minimum degree (defines the range for number of keys)

public:
    BTree(int _t) {
        root = nullptr;
        t = _t;
    }

    void traverse() {
        if (root != nullptr) root->traverse();
    }

    BTreeNode* search(int key) {
        return (root == nullptr) ? nullptr : root->search(key);
    }

    void insert(int key);
};

