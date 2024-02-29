#include "binary_trees.h"

/**
 * bst_insert - inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: value to store in the node to be inserted
 * Return: pointer to the created node, or NULL on failure
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *xty, *alx;

	if (tree == NULL || *tree == NULL)
	{
		xty = binary_tree_node(NULL, value);
		*tree = xty;
		return (xty);
	}

	alx = *tree;

	while (alx != NULL)
	{
		if (alx->n == value)
			return (NULL);
		if (alx->n > value)
		{
			if (alx->left == NULL)
			{
				alx->left = binary_tree_node(alx, value);
				return (alx->left);
			}
			alx = alx->left;
		}
		if (alx->n < value)
		{
			if (alx->right == NULL)
			{
				alx->right = binary_tree_node(alx, value);
				return (alx->right);
			}
			alx = alx->right;
		}
	}
	return (NULL);
}
