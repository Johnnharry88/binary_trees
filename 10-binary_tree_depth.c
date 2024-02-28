#include "binary_trees.h"

/**
 * binary_tree_depth - Estimates the depth of a binary tree
 * @tree: Pointer to the nod to be estimated
 * Return: void
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree && tree->parent)
		return (1 + binary_tree_depth(tree->parent));

	return (0);
}
