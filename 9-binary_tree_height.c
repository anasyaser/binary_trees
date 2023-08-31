#include "binary_trees.h"

/**
 * binary_tree_height - get binary tree height
 *
 * @tree: pointer to tree root
 * Return: (size_t) binary tree height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h;
	size_t right_h;

	if (tree && (tree->left || tree->right))
	{
		left_h = 1 + binary_tree_height(tree->left);
		right_h = 1 + binary_tree_height(tree->right);

		if (left_h > right_h)
			return (left_h);
		return (right_h);
	}
	return (0);
}
