#include "binary_trees.h"

/**
 * bi_node_comp - Compare node of a binary tree
 * @tree: pointer to the root node of the tree to check
 * @minimum: minimum value
 * @maximum: maximum value
 * Return: 1 if success, 0 otherwise
 */
int bi_node_comp(const binary_tree_t *tree, int minimum, int maximum)
{
	if (tree == NULL)
		return (1);

	if (tree->n < minimum || tree->n > maximum)
		return (0);

	return (
		bi_node_comp(tree->left, minimum, tree->n - 1) &&
		bi_node_comp(tree->right, tree->n + 1, maximum)
	);
}

/**
 * binary_tree_is_bst - checks for a valid Binary Search tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if success, or MAximu and minimum
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (bi_node_comp(tree, INT_MIN, INT_MAX));
}
