#include "binary_trees.h"

/**
* heap_insert - inserts a value into a Max Binary Heap
* @root: double pointer to the root node of the Heap
* @value: value stored in the node to be inserted
* Return: pointer to the inserted node, or NULL on failure
*/
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new_node = NULL;

	new_node = binary_tree_node(NULL, value);

	if (!new_node)
		return (NULL);

	if (!(*root))
	{
		*root = new_node;
		return (new_node);
	}

	return (new_node);	
	/*
	if (binary_tree_is_perfect(root) == 1)
		heap_insert(root->left, value);*/
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: If tree is NULL, your function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_balance(tree->left) == 0 &&
			binary_tree_balance(tree->right) == 0)
	{
		if (binary_tree_size(tree->left) == binary_tree_size(tree->right))
			return (1);
	}
	return (0);
}
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: If tree is NULL, return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, balance_f = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left_height = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_height = 1 + binary_tree_height(tree->right);
	balance_f = left_height - right_height;

	return (balance_f);
}
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		height_left = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		height_right = 1 + binary_tree_height(tree->right);

	if (height_left >= height_right)
		return (height_left);
	else
		return (height_right);
}
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: Size of the tree. If tree is NULL, return 0.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (!tree)
		return (0);

	if (tree->left != NULL)
		size = size + binary_tree_size(tree->left);

	if (tree->right != NULL)
		size = size + binary_tree_size(tree->right);

	return (size);
}
