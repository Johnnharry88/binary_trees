#include "binary_trees.h"

/**
 * binary_tree_ancestor - finds the lowest common tree of two nodes
 * @first: Pointer to the frst node
 * @second: Pointer to the secod node
 * Return: NULL if no common ancestores else pointer to common ancestors
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *alx, *xty;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	alx = first->parent;
	xty = second->parent;

	if (first == xty || !alx || (!alx->parent && xty))
		return (binary_trees_ancestor(first, xty));
	else if (alx == second || !xty || (!xty->parent && alx))
		return (binary_trees_ancestor(alx, second));
	return (binary_trees_ancestor(alx, xty));
}
