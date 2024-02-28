#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tre is full using recursion
 * @tree: Pointer to the root node of tree to check
 * Return: 0 if binary tree is not full else 1
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	if (!tree->left || !tree->right)
		return (0);
	return (binary_tree_is_full(tree->left) &&
		binary_tree_is_full(tree->right));
}
