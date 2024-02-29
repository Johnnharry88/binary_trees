#include "binary_trees.h"

/**
 * b_tree_aux - auxiliary function
 * @tree: pointer to root node of the binary tree
 * Return: integer with level
 */

int b_tree_aux(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	l_height = b_tree_aux(tree->left);
	r_height = b_tree_aux(tree->right);
	if (l_height > r_height)
		return (l_height + 1);
	else
		return (r_height + 1);
}


/**
 * b_tree_balance - factor calculate
 * @tree: pointer to root node of the binary tree
 * Return: integer with factor
 */

int b_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (b_tree_balance(tree->left) - b_tree_balance(tree->right));
}

/**
 * b_tree_avl - Check level
 * @tree: pointer to root node of the binary tree
 * @minimum: min value
 * @maximum: max value
 * Return: 1 if is AVL, 0 otherwise
 */

int b_tree_avl(const binary_tree_t *tree, int minimum, int maximum)
{
	int b_left, b_right, b;

	if (tree == NULL)
		return (1);
	if (tree->n > maximum || tree->n < minimum)
		return (0);
	b = b_tree_balance(tree);
	if (b < -1 || b > 1)
		return (0);
	b_left = b_tree_avl(tree->left, minimum, tree->n - 1);
	b_right = b_tree_avl(tree->right, tree->n + 1, maximum);
	if (b_left == 1 && b_right == 1)
		return (1);
	return (0);
}

/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is a valid AVL Tree, and 0 otherwise
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (b_tree_avl(tree, INT_MIN, INT_MAX));

}
