# C - Binary trees

![img](https://media.geeksforgeeks.org/wp-content/cdn-uploads/binary-tree-to-DLL.png)

## Description
Binary Tree is defined as a tree data structure where each node has at most 2 children. Since each element in a binary tree can have only 2 children, we typically name them the left and right child.

## Resources
### Read or Watch:
- [Binary tree](https://en.wikipedia.org/wiki/Binary_tree)
- [Data Structure and Algorithms - Tree](https://www.tutorialspoint.com/data_structures_algorithms/tree_data_structure.htm)
- [Tree Traversal](https://www.tutorialspoint.com/data_structures_algorithms/tree_traversal.htm)
- [Binary Search Tree](https://en.wikipedia.org/wiki/Binary_search_tree)
- [Data structures: Binary Tree](https://www.youtube.com/watch?v=H5JubkIy_p8)

## Headers
```c
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
```
## Requirements
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- The prototypes of all your functions should be included in your header file called binary_trees.h

## More Info
### Data Structures

#### Basic Binary Tree
```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

#### Binary Search Tree
```c
typedef struct binary_tree_s bst_t;
```

#### AVL Tree
```c
typedef struct binary_tree_s avl_t;
```

#### Max Binary Heap
```c
typedef struct binary_tree_s heap_t;
```

### Print function
To match the examples in the tasks, you are given [this function](https://github.com/hs-hq/0x1C.c).
This function is used only for visualization purposes. 

-------------------------
## Tasks

### 0. New node
Write a function that creates a binary tree node
- Prototype: `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the parent node of the node to create
- And `value` is the value to put in the new node
- When created, a node does not have any child
- Your function must return a pointer to the new node, or `NULL` on failure
- File: `0-binary_tree_node.c`
- 
-------------------------
### 1. Insert left
Write a function that inserts a node as the left-child of another node
- Prototype: `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the node to insert the left-child in
- And `value` is the value to store in the new node
- Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
- If `parent` already has a left-child, the new node must take its place, and the old left-child must be set as the left-child of the new node.
- File: `1-binary_tree_insert_left.c`

-------------------------
### 2. Insert right
Write a function that inserts a node as the right-child of another node
- Prototype: `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);`
- Where `parent` is a pointer to the node to insert the right-child in
- And `value` is the value to store in the new node
- Your function must return a pointer to the created node, or `NULL` on failure or if `parent` is `NULL`
- If `parent` already has a right-child, the new node must take its place, and the old right-child must be set as the right-child of the new node.
- File: `2-binary_tree_insert_right.c`

-------------------------
### 3. Delete
Write a function that deletes an entire binary tree
- Prototype: `void binary_tree_delete(binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to delete
- If `tree` is `NULL`, do nothing
- File: `3-binary_tree_delete.c`

-------------------------
### 4. Is leaf
Write a function that checks if a node is a leaf
- Prototype: `int binary_tree_is_leaf(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check
- Your function must return `1` if `node` is a leaf, otherwise `0`
- If `node` is `NULL`, return `0`
- File: `4-binary_tree_is_leaf.c`

-------------------------
### 5. Is root
Write a function that checks if a given node is a root
- Prototype: `int binary_tree_is_root(const binary_tree_t *node);`
- Where `node` is a pointer to the node to check
- Your function must return `1` if `node` is a root, otherwise `0`
- If `node` is `NULL`, return `0`
- File: `5-binary_tree_is_root.c`

-------------------------
### 6. Pre-order traversal
Write a function that goes through a binary tree using pre-order traversal
- Prototype: `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing``
- File: `6-binary_tree_preorder.c`

-------------------------
### 7. In-order traversal
Write a function that goes through a binary tree using in-order traversal
- Prototype: `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing
- File: `7-binary_tree_inorder.c`

-------------------------
### 8. Post-order traversal
Write a function that goes through a binary tree using post-order traversal
- Prototype: `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int));`
- Where `tree` is a pointer to the root node of the tree to traverse
- And `func` is a pointer to a function to call for each node. The value in the node must be passed as a parameter to this function.
- If `tree` or `func` is `NULL`, do nothing
- File: `8-binary_tree_postorder.c`

-------------------------
### 9. Height
Write a function that measures the height of a binary tree
- Prototype: `size_t binary_tree_height(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the height.
- If `tree` is `NULL`, your function must return `0`
- File: `9-binary_tree_height.c`

-------------------------
### 10. Depth
Write a function that measures the depth of a node in a binary tree
- Prototype: `size_t binary_tree_depth(const binary_tree_t *tree);`
- Where `tree` is a pointer to the node to measure the depth
- If `tree` is `NULL`, your function must return `0`
- File: `10-binary_tree_depth.c`

-------------------------
### 11. Size
Write a function that measures the size of a binary tree
- Prototype: `size_t binary_tree_size(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the size
- If `tree` is `NULL`, the function must return `0`
- File: `11-binary_tree_size.c`

-------------------------
### 12. Leaves
Write a function that counts the leaves in a binary tree
- Prototype: `size_t binary_tree_leaves(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to count the number of leaves
- If `tree` is `NULL`, the function must return `0`
- A `NULL` pointer is not a leaf
- File: `12-binary_tree_leaves.c`

-------------------------
### 13. Nodes
Write a function that counts the nodes with at least 1 child in a binary tree
- Prototype: `size_t binary_tree_nodes(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to count the number of nodes
- If `tree` is `NULL`, the function must return `0`
- A `NULL` pointer is not a node
- File: `13-binary_tree_nodes.c`

-------------------------
### 14. Balance factor
Write a function that measures the balance factor of a binary tree
- Prototype: `int binary_tree_balance(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to measure the balance factor
- If `tree` is `NULL`, return `0`
- File: `14-binary_tree_balance.c`

-------------------------
### 15. Is full
Write a function that checks if a binary tree is full
- Prototype: `int binary_tree_is_full(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- If `tree` is `NULL`, your function must return `0`
- File: `15-binary_tree_is_full.c`

-------------------------
### 16. Is perfect
Write a function that checks if a binary tree is perfect
- Prototype: `int binary_tree_is_perfect(const binary_tree_t *tree);`
- Where `tree` is a pointer to the root node of the tree to check
- If `tree` is `NULL`, your function must return `0`
- File: `16-binary_tree_is_perfect.c`

-------------------------
### 17. Sibling
Write a function that finds the sibling of a node
- Prototype: `binary_tree_t *binary_tree_sibling(binary_tree_t *node);`
- Where `node` is a pointer to the node to find the sibling
- Your function must return a pointer to the sibling node
- If `node` is `NULL` or the parent is `NULL`, return `NULL`
- If `node` has no sibling, return `NULL`

-------------------------
### 18. Uncle
Write a function that finds the uncle of a node
- Prototype: `binary_tree_t *binary_tree_uncle(binary_tree_t *node);`
- Where `node` is a pointer to the node to find the uncle
- Your function must return a pointer to the uncle node
- If `node` is `NULL`, return `NULL`
- If `node` has no uncle, return `NULL`
- File: `18-binary_tree_uncle.c`
