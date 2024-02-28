#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts as the left child of another node
 * @parent: pointer to the node to insert the newly node
 * @value: value to be store in the new node
 * Return: pointer to newly created node ot NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_parent = NULL, *alx = NULL;

	if (!parent)
		return (NULL);
	alx = malloc(sizeof(binary_tree_t));

	if (!alx)
		return (NULL);

	alx->parent = parent;
	alx->left = NULL;
	alx->right = NULL;
	alx->n = value;

	left_parent = parent->left;
	parent->left = alx;

	if (left_parent)
	{
		left_parent->parent = alx;
		alx->left = left_parent;
	}
	return (alx);
}
