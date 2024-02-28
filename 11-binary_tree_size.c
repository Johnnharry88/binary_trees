#include "binary_trees.h"

/**
 * binary_tree_size - Estimates the size of a binary tree
 * @tree: Pointer to the root node of the binary tree to be measred
 * Return: Size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t x = 0;

	if (!tree)
		return (0);
	x = x + 1;
	x = x + binary_tree_size(tree->left);
	x = x + binary_tree_size(tree->right);
	return (x);
}
