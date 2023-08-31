#include "binary_trees.h"

/**
 * binary_tree_sibling - get node sibling
 *
 * @node: point to node to get its sibling
 * Return: pointer to node sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *tmp;

	if (node && node->parent)
	{
		tmp = node->parent;
		if (tmp->left == node)
			return (tmp->right);
		return (tmp->left);
	}
	return (NULL);
}
