#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a binary tree
 * @tree: pointer to root node
 * Return: 0 if NULL or tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
	return (0);
	}

	while (tree->parent != NULL)
	{
	depth++;
	tree = tree->parent;
	}

	return (depth);
}
