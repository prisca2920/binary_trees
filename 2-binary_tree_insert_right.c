#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts right child
 * @parent: pointer to node
 * @value: int to store in node
 * Return: right child
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (parent == NULL)
	{
	return (NULL);
	}

	newnode = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
	newnode->right = parent->right;
	newnode->right->parent = newnode;
	}

	parent->right = newnode;

	return (newnode);
}
