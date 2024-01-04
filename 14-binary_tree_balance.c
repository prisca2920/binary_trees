#include "binary_trees.h"

/**
 * _height - returns the height of a binary tree
 * @tree: Pointer to the node
 * Return: height or 0
 */
size_t _height(const binary_tree_t *tree)
{
	size_t h_left, h_right;

	if (tree == NULL)
	{
	return (0);
	}

	h_left = _height(tree->left);
	h_right = _height(tree->right);

	if (h_left >= h_right)
	{
	return (h_left + 1);
	}

	return (h_right + 1);
}

/**
 * binary_tree_balance - measures the balance
 * @tree: pointer to the root node
 * Return: the balance factor or 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int balance_l = 0, balance_r = 0;

	if (tree == NULL)
	{
	return (0);
	}

	if (tree->left != NULL)
	{
	balance_l = _height(tree->left);
	}

	if (tree->right != NULL)
	{
	balance_r = _height(tree->right);
	}

	return (balance_l - balance_r);
}
