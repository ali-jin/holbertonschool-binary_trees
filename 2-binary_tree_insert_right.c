#include "binary_trees.h"

/**
 * binary_tree_insert_right - allocates memory for a binary tree node
 * @parent: parent of new node
 * @value: value of new node
 * Return: on failure 'NULL', otherwise the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child;

	if (parent == NULL)
		return (NULL);

	new_child = malloc(sizeof(binary_tree_t));

	if (new_child == NULL)
		return (NULL);

	new_child->left = new_child->right = NULL;
	new_child->parent = parent;
	new_child->n = value;

	if (parent->right)
	{
		parent->right->parent = new_child;
		new_child->right = parent->right;
		parent->right = new_child;
	}
	else
	{
		parent->right = new_child;
	}


	return (new_child);
}
