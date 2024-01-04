#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of a binary tree
 * @tree: pointer to root node
 * Return: 0 if NULL or tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
	{
	return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
	{
	return (1);
	}

	leaves = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
	return (leaves);
}
