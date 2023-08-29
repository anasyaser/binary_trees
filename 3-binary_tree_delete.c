#include <stdlib.h>
#include "binary_trees.h"

/*
 * binary_tree_delete - delete all entire binary tree
 *
 * @tree: root of binary tree
 * Return: None
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
