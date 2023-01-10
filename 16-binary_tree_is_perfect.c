#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root of the tree
 * Return: 0 on failure otherwise 1
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, total;

	if (!tree)
		return (0);
	h = height(tree);
	total = counting(tree);

	if (_pow_recursion(2, h + 1) - 1 == total)
		return (1);
	return(0);

}

/**
 * counting - counts total of nodes
 * @tree: root of tree
 * Return: number of nodes in tree
 */

int counting(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	l = counting(tree->left);
	r = counting(tree->right);

	return (l + r + 1);
}

/**
 * height - measures height
 * @node: node to measure
 *
 * Return: height
 */
int height(const binary_tree_t *node)
{
	int left, right;

	if (node == NULL)
		return (-1);
	left = height(node->left);
	right = height(node->right);
	if (left > right)
		return (left + 1);
	else
		return (right + 1);
}

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: 1st parameter
 * @y: 2nd parameter
 * Return: -1 or value of x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}