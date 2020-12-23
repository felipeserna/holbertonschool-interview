#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdio.h>
#include <stdlib.h>

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

/* Binary Tree */
typedef struct binary_tree_s binary_tree_t;

/* Max Binary Heap */
typedef struct binary_tree_s heap_t;

/* prints binary tree */
void binary_tree_print(const binary_tree_t *);

/* creates a binary tree node */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* inserts a value into a Max Binary Heap */
heap_t *heap_insert(heap_t **root, int value);
/* height of the tree */
size_t binary_tree_height(heap_t *root);
/* finds space for insertion */
heap_t *find_space(heap_t *root, size_t level);
/* swaps inserted node with parent */
heap_t *swap_child(heap_t **root, heap_t *new_node);

#endif /* BINARY_TREES_H */
