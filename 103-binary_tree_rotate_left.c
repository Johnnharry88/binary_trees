#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotates the binary tree anticlockwise
 * @tree: Pointer to the root node of the binary tree
 * Return: NULL or a pointer to a rotated binary tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *alx, *parent = tree;

	if (!tree || tree->right == NULL)
		return (NULL);

	alx = parent->right;
	if (!alx)
		return (tree);

	if (alx->left)
		alx->left->parent = parent;
	parent->right = alx->right;
	alx->left = parent;
	alx->parent = parent->parent;
	parent->parent = alx;

	if (alx->parent && alx->parent->left == parent)
		alx->parent->left = alx;
	else if (alx->parent)
		alx->parent->right = alx;
	return (alx);
}
