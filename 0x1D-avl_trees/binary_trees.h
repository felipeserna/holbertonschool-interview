#ifndef felipeserna
#define felipeserna

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/* Basic Binary Tree */
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

/* AVL Tree */
typedef struct binary_tree_s avl_t;

/* Given print function */
void binary_tree_print(const binary_tree_t *tree);

/* Function from Binary Trees project (Foundations) */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

/* Mandatory function */
int binary_tree_is_avl(const binary_tree_t *tree);

#endif
