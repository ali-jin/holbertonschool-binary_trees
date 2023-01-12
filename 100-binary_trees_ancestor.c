#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node to measure
 *
 * Return: depth on success, otherwise 0
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t d = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		d++;
	}
	return (d);

}

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 *
 * Return: lowest common ancestor node, or NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
const binary_tree_t *second)
{
	const binary_tree_t *n_first, *n_second;
	size_t tree_depth_first, tree_depth_second, index_first, index_second;

	if (first->parent == second->parent)
		return (first->parent);

	n_first = first;
	n_second = second;
	tree_depth_first = binary_tree_depth(first);
	tree_depth_second = binary_tree_depth(second);
	for (index_first = 0; index_first < tree_depth_first; index_first++)
	{
		for (index_second = 0; index_second < tree_depth_second; index_second++)
		{
			if (n_second->parent == n_first || n_first->parent == n_second->parent)
				return (n_second->parent);
			n_second = n_second->parent;
		}
		n_first = n_first->parent;
	}
	return (NULL);
}
