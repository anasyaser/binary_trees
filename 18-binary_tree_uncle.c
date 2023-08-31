#include "binary_trees.h"

/**
 * binary_tree_uncle - get node uncle :)
 *
 * @node: pointer to node to get its uncle
 * Return: pointer to node uncle
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *tmp;
	
	if (node && node->parent && node->parent->parent)
	{
		tmp = node->parent->parent;
		if (tmp->right == node->parent)
			return (tmp->left);
		return (tmp->right);
	}
	return (NULL);
}
