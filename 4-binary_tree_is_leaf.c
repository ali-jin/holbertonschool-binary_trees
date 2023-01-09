#include "binary_trees.h"

/**
 * binary_tree_is_leaf - allocates memory for a binary tree node
 * @parent: parent of new node
 * @value: value of new node
 * Return: on failure '0', otherwise 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (!node)
		return (0);

	if ((node->right) == NULL && (node->left == NULL))
		return (1);
	return(0);
}