#include "binary_trees.h"

/**
 * binary_tree_rotate_left -  function that roates the binary anticlockwise
 * @tree: Pointer to the node root
 * Return: Pointer to node root
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *alx, *parent = tree;

	if (!tree)
		return (NULL);

	alx = parent->right;
	if (!alx)
		return (tree);

	if (alx->left)
		alx->left->parent = parent;

	parent->right = alx->left;
	alx->left = parent;
	alx->parent = parent->parent;
	parent->parent = alx;

	if (alx->parent && alx->parent->left == parent)
		alx->parent->left = alx;
	else if (alx->parent)
		alx->parent->right = alx;

	return (alx);
}
