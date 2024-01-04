#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling
 * @node: pointer to the node to find sibling
 * Return: the sibling or NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
	{
	return (NULL);
	}

	if (node->parent->left && node->parent->left != node)
	{
	return (node->parent->left);
	}

	else if (node->parent->right && node->parent->right != node)
	{
	return (node->parent->right);
	}

	return (NULL);
}
