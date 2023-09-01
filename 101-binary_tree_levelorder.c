#include "binary_trees.h"

/**
 * binary_tree_levelorder - treverse tree by level
 *
 * @tree: pointer to tree root
 * @func: pointer to function to apply to nodes
 * Return: None
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	binary_tree_t **array;
	size_t size;
	size_t i;

	size = binary_tree_size(tree);
	array = malloc(size * sizeof(*binary_tree_t));
	if (array == NULL)
		return;
	array[0] = tree;
	for (i = 0; i < size; i++)
		
}

/**
 * binary_tree_size - get binary tree size
 *
 * @tree: pointer to tree root
 * Return: (size_t) binary tree size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->right) + binary_tree_size(tree->left));
}
