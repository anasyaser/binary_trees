#include "binary_trees.h"

/**
 * binary_tree_rotate_left - rotate tree left
 *
 * @tree: pointer to root node of the tree to be rotated
 * Return: pointer to new rooted node
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *tmp_left;
	binary_tree_t *root;

	if (tree == NULL)
		return (NULL);
	if (!tree->right)
		return (tree);
	tmp_left = tree->right->left;
	root = tree->right;
	root->parent = NULL;
	root->left = tree;
	tree->parent = root;
	tree->right = tmp_left;
	if (tmp_left)
		tmp_left->parent = tree;
	return (root);
}
