#include "binary_trees.h"

/**
 * binary_tree_size - get binary tree size
 *
 * @tree: pointer to tree root
 * Return: (size_t) binary tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}
