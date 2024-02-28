#include "binary_trees.h"

/**
 * binary_tree_postorder - transverses a binary tree uing post order
 * @tree: Pointer to the root node of tree to be transversed
 * @func: pointer to a function to call for each node
 * Return: void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
