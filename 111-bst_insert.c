#include "binary_trees.h"

/**
 * bst_insert - insert node to tree
 *
 * @tree: pointer to pointer to root node
 * @value: value of node to be inserted
 * Return: pointer to inserted node else NULL
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *current;
	bst_t *tmp_parent;

	current = *tree;
	while (current)
	{
		tmp_parent = current;
		if (value > current->n)
			current = current->right;
		else if (value < current->n)
			current = current->left;
		else
			return (NULL);
	}
	current = binary_tree_node(tmp_parent, value);
	if (!*tree)
		*tree = current;
	else if (tmp_parent->n < value)
		tmp_parent->right = current;
	else if (tmp_parent->n > value)
		tmp_parent->left = current;
	return (current);
}
