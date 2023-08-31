#include "binary_trees.h"

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
