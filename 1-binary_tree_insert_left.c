#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts left child
 * @parent: pointer to node
 * @value: int to store in node
 * Return: left child
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
	return (NULL);
	}

	newnode = binary_tree_node(parent, value);

	if (parent->left != NULL)
	{
		newnode->left = parent->left;
		newnode->left->parent = newnode;
	}
	parent->left = newnode;

	return (newnode);
}
