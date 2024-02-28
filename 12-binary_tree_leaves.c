#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree
 * @tree: Pointer to the root node of the tree to be counted
 * Return: void.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t rec = 0;
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		rec = rec + 1;
	rec = rec + binary_tree_leaves(tree->left);
	rec = rec + binary_tree_leaves(tree->right);
	return (rec);
}
