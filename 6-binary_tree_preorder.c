#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses using preorder
 * @tree: the tree to be traversed
 * @func: a pointer to call each node
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
