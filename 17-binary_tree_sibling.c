#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the root of the tree
 * Return: the sibling of a given node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{


	if (!node)
		return (NULL);
	if (node->parent)
	{
		if (node == node->parent->right)
		{
			if (node->parent->left)
				return (node->parent->left);
			else
				return (NULL);
		}
		if (node == node->parent->left)
		{
			if (node->parent->right)
				return (node->parent->right);
			else
				return (NULL);
		}

	}
	return (NULL);
}
