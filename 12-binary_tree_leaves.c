#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a node in a binary tree
 * @tree: node to measure
 *
 * Return: depth on success, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		l = 1;

	while (tree->left || tree->right)
	{
		if (tree->right)
		{
			tree = tree->right;
			l++;
		}
		if (tree->left)
		{
			tree = tree->left;
			l++;
		}
	}
	return (l);
}
