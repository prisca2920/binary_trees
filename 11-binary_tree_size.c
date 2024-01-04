#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to root node
 * Return: 0 if NULL or tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
	{
	return (0);
	}

	size = binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right);

	return (size);
}
