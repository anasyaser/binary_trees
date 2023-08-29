#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 *
 * @tree: pointer to binary tree head
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int right_l;
	int left_l;

	if (tree == NULL)
		return (0);
	right_l = binary_tree_is_leaf(tree->right);
	left_l = binary_tree_is_leaf(tree->left);

	if (right_l && left_l)
		return (1);
	else if (!right_l && !left_l)
		return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
	return (0);
}

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right || node->left)
		return (0);
	return (1);
}

