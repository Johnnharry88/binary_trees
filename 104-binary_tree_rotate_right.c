#include "binary_trees.h"

/**
 * binary_tree_rotate_right -  rotation on a tree
 * @tree: Pointer to
 *
 * Return: Pointer
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *alx, *parent = tree;

	if (!tree)
		return (NULL);

	alx = parent->left;
	if (!alx)
		return (tree);

	if (alx->right)
		alx->right->parent = parent;

	parent->left = alx->right;
	alx->right = parent;
	alx->parent = parent->parent;
	parent->parent = alx;

	if (alx->parent && alx->parent->left == parent)
		alx->parent->left = alx;
	else if (alx->parent)
		alx->parent->right = alx;

	return (alx);
}
