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
	size_t right_h;
	size_t left_h;

	if (tree == NULL)
		return (0);
	right_l = binary_tree_is_leaf(tree->right);
	left_l = binary_tree_is_leaf(tree->left);
	right_h = binary_tree_height(tree->right);
	left_h = binary_tree_height(tree->left);
	if (right_h != left_h)
		return (0);
	if (right_l && left_l)
		return (1);
	else if (tree->right && tree->left)
		return (binary_tree_is_perfect(tree->left)
			&& binary_tree_is_perfect(tree->right));
	return (0);
}

/**
 * binary_tree_is_leaf - check if node is leaf
 *
 * @node: pointer to node
 * Return: 1 if leafe else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->right || node->left)
		return (0);
	return (1);
}

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
