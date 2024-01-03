#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses using postorder
 * @tree: the tree to be traversed
 * @func: a pointer to call each node
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
