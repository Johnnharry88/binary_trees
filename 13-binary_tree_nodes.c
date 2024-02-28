#include "binary_trees.h"

/**
 * binary_tree_node - counts nodes with at least 1 childe in a binary tree
 * @tree: Pointer to the root of the tree to count
 * Return: 0 if tree is NULL else the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_count = 0;
	if (!tree)
		return (0);
	else
	{
		if (tree->left || tree->right)
			node_count += 1;
		node_count = node_count + binary_tree_nodes(tree->left);
		node_count = node_count + binary_tree_nodes(tree->right);
	}
	return (node_count);
}
