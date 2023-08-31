#include "binary_trees.h"

/**
 * binary_tree_ancestor - get lowest common ancestor
 *
 * @first: first node
 * @second: second node
 * Return: Pointer to lowest common ancestor
 */

binary_tree_t *binary_tree_ancestor(const binary_tree_t *first,
				    const binary_tree_t *second)
{
	size_t first_h;
	size_t second_h;

	first_h = binary_tree_depth(first);
	second_h = binary_tree_depth(second);

	
}

/**
 * binary_tree_depth - get binary tree depth
 *
 * @tree: pointer to tree root
 * Return: (size_t) binary tree depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (1 + binary_tree_depth(tree->parent));
}
