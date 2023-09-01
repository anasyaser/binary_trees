#include "binary_trees.h"

/**
 * binary_tree_rotate_right - rotate tree right
 *
 * @tree: pointer to root node of the tree to be rotated
 * Return: pointer to new rooted node
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *tmp_right;
	binary_tree_t *root;

	if (!tree->left)
		return (tree);
	tmp_right = tree->left->right;
	root = tree->left;
	root->parent = NULL;
	root->right = tree;
	tree->parent = root;
	tree->left = tmp_right;
	if (tmp_right)
		tmp_right->parent = tree;
	return (root);
}
