#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast 1 child
 * @tree: pointer to root node
 * Return: 0 if NULL or tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (tree == NULL)
	{
	return (0);
	}

	if (!tree->left && !tree->right)
	{
	return (0);
	}

	nodes = binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right);
	return (nodes);
}
