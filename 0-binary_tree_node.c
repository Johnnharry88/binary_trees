#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node.
 * @parent: A pointer to the parent node to create.
 * @value: The value to be stored in the new node.
 * Return: NULL or pointer to newly created
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *alx;

	alx = malloc(sizeof(binary_tree_t));
	if (alx == NULL)
		return (NULL);
	
	alx->n = value;
	alx->parent = parent;
	alx->left = NULL;
	alx->right = NULL;

	return (alx);
}
