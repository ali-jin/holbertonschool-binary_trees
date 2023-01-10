#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: node to measure
 *
 * Return: balance on success, otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int b;

	if (!tree)
		return (0);
	b = _height(tree->left) - _height(tree->right);
	return (b);
}

/**
 * height - measures height
 * @node: node to measure
 *
 * Return: height
 */
int _height(binary_tree_t *node)
{
	int left, right;

	if (node == NULL)
		return (-1);
	left = _height(node->left);
	right = _height(node->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}
