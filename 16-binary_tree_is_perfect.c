#include "binary_trees.h"

/**
 * depth_comp - Compares depth size of binary tree
 * @tree: Pointer to the root node of the binary tree to be compared
 * Return: size
 */
int depth_comp(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (1 + depth_comp(tree->left) + depth_comp(tree->right));
}

/**
 * binary_tree_is_perfect - checks for a perfect binary tree
 * @tree: Pointer to the root node of the binary tree under examination
 * Return: 0 or 1 if binary tree is perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_binary = 0, r_binary = 0;

	if (!tree)
		return (0);
	if (tree && (!tree->left && !tree->right))
		return (1);
	l_binary = depth_comp(tree->left);
	r_binary = depth_comp(tree->right);
	if ((l_binary - r_binary) == 0)
		return (1);
	return (0);
}
