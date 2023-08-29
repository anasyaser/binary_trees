#include "binary_trees.h"

/**
 * binary_tree_is_leaf - check if node is leaf or not
 *
 * @node: pointer to node to check
 * Return: 1 if is leaf else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right || node->left)
		return (0);
	return (1);
}
