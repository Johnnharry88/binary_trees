#include "binary_trees.h"

/**
 * node_count - function that counts nodes inside a binary tree
 * @root: pointer to the root node of binary tree
 * Return: number of ndes in integer
 */
int node_count(binary_tree_t *root)
{
	if (!root)
		return (0);
	return (node_count(root->left) + node_count(root->right) + 1);
}

/**
 * binary_comp - checks out the completeness of a binary tree
 * @root: Pointer to root node of binary tree
 * @index: inddex of node to be evaluated
 * @n: number of tree node
 * Return: 1 if tree is heap otherwise 0.
 */
int binary_comp(binary_tree_t *root, int index, int n)
{
	if (!root)
		return (0);
	if (index >= n)
		return (0);
	if (!root->left && !root->right)
		return (1);
	if (root->left && !root->right)
		return (0);
	if (root->left && !root->right)
		return (binary_comp(root->left, index * 2 + 1, n));
	return (binary_comp(root->left, index * 2 + 1, n) &&
		binary_comp(root->right, index * 2 + 2, n));
}

/**
 * binary_tree_is_complete - checks for the completeness of a binary tree
 * @tree: Pointer to the root node of the binary tree
 * Return: 1 if complete otherwise 0.
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int x;
	binary_tree_t *node;

	if (!tree)
		return (0);
	node = (binary_tree_t *)tree;
	x = node_count(node);
	return (binary_comp(node, 0, x));
}
