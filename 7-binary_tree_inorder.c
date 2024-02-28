#include "binary_trees.h"

/**
 * binary_tree_inorder - trnasverses the ninary tree yusing inorder
 * @tree: A pointer to the root of the tree to be trnasversed
 * @func: A pointer to a function to call each node
 * Return: void.
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
