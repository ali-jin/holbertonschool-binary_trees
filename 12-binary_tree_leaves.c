#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a node in a binary tree
 * @tree: node to measure
 *
 * Return: depth on success, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	l = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (l);
}
