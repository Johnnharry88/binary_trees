#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: Pointer to the root node of the binary tree
 * Return: height of binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_binary = 0, r_binary = 0;

	if (!tree)
		return (0);
	if (tree->left)
		l_binary = 1 + binary_tree_height(tree->left);
	if (tree->right)
		r_binary = 1 + binary_tree_height(tree->right);
	if (l_binary > r_binary)
		return (l_binary);
	return (r_binary);
}

/**
 * print_level_order - prints out the binary tree
 * @tree: Pointer to the root node of the binary tree
 * @level: level of the binary tree
 * @func: call to function
 */
void print_level_order(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (!tree)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		print_level_order(tree->left, level - 1, func);
		print_level_order(tree->right, level - 1, func);
	}
}

/**
 * binary_tree_levelorder - function that transverses through a binary tree
 * using level-order method.
 * @tree: pointer to the root node of the binary tree
 * @func: pointer to function to call for each node
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int x = 0, len = 1;

	if (!tree || !func)
		return;
	x = 1 + binary_tree_height(tree);

	while (len <= x)
	{
		print_level_order(tree, len, func);
		len = len + 1;
	}
}
