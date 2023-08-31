#include "binary_trees.h"

/**
 * binary_tree_nodes - count non leaves nodes
 *
 * @tree: pointer to tree root
 * Return: (size_t) number of non leaves nodes in tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree && (tree->left || tree->right))
	{
		return 1 + binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right);
	}
	return (0);
}
