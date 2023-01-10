#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @tree: pointer to the root of the tree
 * Return: the uncle of a given node
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	

	if (!node)
		return (NULL);
	if (node->parent)
	{
		if (node->parent->parent && node->parent == node->parent->parent->left )
			{
				if (node->parent->parent->right)
					return (node->parent->parent->right);
				else
					return (NULL);
			}
		if (node->parent->parent && node->parent == node->parent->parent->right )
			{
				if (node->parent->parent->left)
					return (node->parent->parent->left);
				else
					return (NULL);
			}
	}
	return (NULL);
}