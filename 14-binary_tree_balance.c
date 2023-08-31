#include "binary_trees.h"
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

/**
 * binary_tree_balance - measures balance factore of binary tree
 *
 * @tree: pointer to tree root
 * Return: (int) balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h = 0;
	int right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_h = 1 + binary_tree_height(tree->left);
	if (tree->right)
		right_h = 1 + binary_tree_height(tree->right);

	return (left_h - right_h);
}
