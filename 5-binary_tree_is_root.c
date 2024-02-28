#include "binary_trees.h"

/**
 * binary_tree_is_root - checks out if a node is a root of a binary tree
 * @node: Pointer to node to be checked
 * Return:1 if nod is a root  otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	else
		return (1);
}
