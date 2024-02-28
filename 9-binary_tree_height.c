#include "binary_trees.h"

/**
 * binaary_tree_height - Calcuates the height of a binary tree.
 * @tree: A pointer to the root of the tree whiose is to be estimated
 * Return: 0 if tree is NULL else height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0;
		size_t right = 0;
		
		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		if (left > right)
			return left;
		else
			return right;
	}
	return (0);
}
