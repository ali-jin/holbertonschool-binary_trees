#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value:  value to store in the new node
 *
 * Return: pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *NewNode = malloc(sizeof(binary_tree_t)), *tmp;

	if (parent == NULL)
		return (NULL);

	NewNode->n = value;

	if (parent->left != NULL)
	{
		tmp = parent->left;
		NewNode->parent = parent;
		parent->left = NewNode;
		NewNode->left = tmp;
		tmp->parent = NewNode;
	}
	else
	{
		NewNode->parent = parent;
		parent->left = NewNode;
	}

	return (NewNode);
}
