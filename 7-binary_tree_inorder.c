#include "binary_trees.h"

/**
 * binary_tree_inorder - traverse through tree in-order(left->parent->right)
 *
 * @tree: tree root
 * @func: pointer to function to apply on each node
 * Return: None
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
