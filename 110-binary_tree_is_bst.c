#include "binary_trees.h"

/**
 * binary_tree_is_bst - check if tree is valid binary search tree
 *
 * @tree: pointer to root node of tree
 * Return: 1 if tree is valid binary search tree lese 0
 */

int binary_tree_is_bst(const binary_tree_t *tree)
{
	binary_tree_t *left_n;
	binary_tree_t *right_n;

	if (tree == NULL)
		return (0);
	left_n = tree->left;
	right_n = tree->right;

	if (!left_n && right_n && tree->n < right_n->n)
		return (1);
	if (!right_n && left_n && tree->n > left_n->n)
		return (1);
	if (left_n && right_n && tree->n > left_n->n && tree->n < right_n->n )
}
