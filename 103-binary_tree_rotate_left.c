#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates the binary tree anticlockwise
 * @tree: Pointer to the root node of the binary tree
 * Return: NULL or a pointer to a rotated binary tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *alx, *node = tree;

	if (!tree || tree->right == NULL)
		return (NULL);

	alx = node->left;
	node->left = tree;
	tree->right = alx;
	if (alx != NULL)
		alx->parent = tree;
	alx = tree->parent;
	tree->parent = alx;
	alx->parent = node;
	if (alx != NULL)
	{
		if (alx->left == tree)
			alx->left = node;
		else
			alx->right = alx;
	}
	return (node);
}
