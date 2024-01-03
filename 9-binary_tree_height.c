#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to root node
 * Return: 0 if NULL or tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;

	if (tree == NULL)
	{
	return (0);
	
	}

	if (tree->left != NULL)
	{
	h_left = 1 + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
        {
        h_right = 1 + binary_tree_height(tree->left);
        }

	if (h_left > h_right)
	{
	return h_left;
	}
	else
	{
	return h_right;
	}
}

