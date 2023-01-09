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
	binary_tree_t *NewNode;

	if (parent == NULL)
		return (NULL);
	
	NewNode = malloc(sizeof(binary_tree_t));

	if (NewNode == NULL)
		return (NULL);

	NewNode->n = value;
	NewNode->left = NewNode->right = NULL;
	NewNode->parent = parent;

	if (parent->left)
	{
		parent->left->parent = NewNode;
		NewNode->left = parent->left;
		parent->left = NewNode;
	}
	else
	{
		parent->left = NewNode;
	}

	return (NewNode);
}
