#include "binary_trees.h"

/**
 * heap_insert - inserts a value into a Max Binary Heap
 * @root: double pointer to the root node of the Heap
 * @value: value to store in the inserted node
 * Return: pointer to the inserted node, or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	size_t level = 0, height = 0;
	heap_t *space = NULL, *new_node = NULL;

	if (!root)
		return (NULL);
	if (!(*root))
	{
		new_node = binary_tree_node(*root, value);
		*root = new_node;
		return (new_node);
	}
	height = binary_tree_height(*root);

	while (level < height)
	{
		space = find_space(*root, level);
		if (space)
			break;
		level++;
	}
	new_node = binary_tree_node(space, value);
	if (!space->left)
		space->left = new_node;
	else
		space->right = new_node;
	while (new_node->parent && new_node->n > new_node->parent->n)
	{
		new_node = swap_child(root, new_node);
	}
	return (new_node);
}

/**
 * binary_tree_height - height of a binary tree
 * that is level-order traversal
 * @root: pointer to the root node of the tree
 * Return: height of the tree
 */
size_t binary_tree_height(heap_t *root)
{
	if (!root)
		return (0);
	return (1 + binary_tree_height(root->left));
}

/**
 * find_space - finds space through level-order traversal
 * @root: pointer to the root node
 * @level: current level
 * Return: space for new node, or NULL if it has two children
 */
heap_t *find_space(heap_t *root, size_t level)
{
	heap_t *space = NULL;

	if (!root)
		return (NULL);
	if (level == 0 && !(root->right))
		return (root);
	else if (level == 0)
		return (NULL);
	space = find_space(root->left, level - 1);
	if (space)
		return (space);
	space = find_space(root->right, level - 1);
	return (space);
}

/**
 * swap_child - swaps the new node with its parent
 * @root: double pointer to the root node
 * @new_node: new node
 * Return: pointer to new node after swap
 */
heap_t *swap_child(heap_t **root, heap_t *new_node)
{
	int left = 0;
	heap_t *tmp = new_node->parent, *tmp_r = tmp->right, *tmp_l = tmp->left;

	if (new_node->parent->left == new_node)
		left = 1;
	new_node->parent->right = new_node->right;
	if (new_node->right)
		new_node->right->parent = new_node->parent;
	new_node->parent->left = new_node->left;
	if (new_node->left)
		new_node->left->parent = new_node->parent;
	if (left)
	{
		new_node->right = tmp_r;
		if (tmp_r)
			tmp_r->parent = new_node;
	}
	else
	{
		new_node->left = tmp_l;
		if (tmp_l)
			tmp_l->parent = new_node;
	}
	new_node->parent = tmp->parent;
	if (tmp->parent)
	{
		if (tmp->parent->left == tmp)
			tmp->parent->left = new_node;
		else
			tmp->parent->right = new_node;
	}
	else
		*root = new_node;
	if (left)
		new_node->left = tmp;
	else
		new_node->right = tmp;
	tmp->parent = new_node;
	return (new_node);
}
