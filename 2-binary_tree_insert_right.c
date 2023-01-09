#include "binary_trees.h"

/**
 * binary_tree_insert_right - allocates memory for a binary tree node
 * @parent: parent of new node
 * @value: value of new node
 * Return: on failure 'NULL', otherwise the created node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_child = malloc(sizeof(binary_tree_t)), *temp;


	if (new_child == NULL || parent == NULL)
		return (NULL);

	new_child->n = value;

	if (parent->right)
	{
		temp = parent->right;
		new_child->parent = parent;
		parent->right = new_child;
		new_child->right = temp;
	}
	else
	{
		parent->right = new_child;
		new_child->parent = parent;

	}
	return (new_child);
}
