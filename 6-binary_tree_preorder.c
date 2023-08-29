#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse through tree in-order(parent->left->right)
 *
 * @tree: tree root
 * @func: pointer to function to apply on each node
 * Return: None
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
