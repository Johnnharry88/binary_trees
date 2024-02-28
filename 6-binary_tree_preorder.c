#include "binary_trees.h"

/**
 * binary_tree_preorder - ransverses through a binary tree using preorder
 * @tree: A pointer to the root node of the tree to transverse
 * @func: A pointer to call on each node
 * Return: void.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}

