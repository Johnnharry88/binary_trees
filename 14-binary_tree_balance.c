#include "binary_trees.h"

/**
 * binary_tree_balance - Estimates the balance factior of a binary tree
 * @tree: Pointer to the root node of tree to estimates its balance factor
 * Return: 0 if trees is NULL otherwise balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - Calcuates the height of a binary tree.
 * @tree: A pointer to the root of the tree whiose is to be estimated
 * Return: 0 if tree is NULL else height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0;
		size_t right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left > right) ? left : right);
	}
	return (0);
}
