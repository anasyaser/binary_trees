#include "binary_trees.h"

/**
 * binary_tree_is_perfect - check if binary tree is perfect
 *
 * @tree: pointer to binary tree head
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);

	return (binary_tree_is_perfect_helper(tree, h));
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

/**
 * binary_tree_is_perfect_helper - helper function for perfect function
 *
 * @tree: pointer to tree root
 * @height: tree height
 * Return: 1 if perfect else 0
 */

int binary_tree_is_perfect_helper(const binary_tree_t *tree, size_t height)
{
	if (!tree->left && !tree->right)
		return (height == 0);
	if (tree->left && !tree->right)
		return (0);
	if (!tree->left && tree->right)
		return (0);
	return (binary_tree_is_perfect_helper(tree->right, height - 1)
		&& binary_tree_is_perfect_helper(tree->left, height - 1));
}
