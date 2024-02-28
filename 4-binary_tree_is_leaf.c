#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks whether a node is  a leaf node
 * @node: Pointer to the node to be checked out
 * Return: 1 if leaf else 0.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right != NULL || node->left != NULL)
		return (0);
	else
		return (1);
}
