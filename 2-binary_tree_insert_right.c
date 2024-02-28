#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a new node at the right child of
 * another node
 * @parent: pointer to the node to insert right child
 * @value: value to store in new node
 * Return: a pointer to new node or NuULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *alx = NULL;

	if (!parent)
		return (NULL);
	alx = malloc(sizeof(binary_tree_t));
	if (!alx)
		return (NULL);

	alx->n = value;
	alx->left = NULL;

	if (parent->right == NULL)
	{
		alx->parent = parent;
		alx->right = NULL;
		parent->right = alx;
	}
	else
	{
		alx->parent = parent;
		alx->right = parent->right;
		parent->right = alx;
		alx->right->parent = alx;
	}
	return (alx);
}
