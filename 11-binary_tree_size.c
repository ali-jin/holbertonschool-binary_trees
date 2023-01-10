#include "binary_trees.h"
/**
 * binary_tree_size - counts total of nodes
 * @tree: root of tree
 * Return: number of nodes in tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);

	return (l + r + 1);
}
