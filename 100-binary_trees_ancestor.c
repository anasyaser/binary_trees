#include "binary_trees.h"

/**
 * binary_tree_ancestor - get lowest common ancestor
 *
 * @first: first node
 * @second: second node
 * Return: Pointer to lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				    const binary_tree_t *second)
{
	size_t first_d;
	size_t second_d;
	int diff;

	first_d = binary_tree_depth(first);
	second_d = binary_tree_depth(second);
	diff = first_d - second_d;
	if (second_d > first_d)
		diff = second_d - first_d;
	while (diff--)
	{
		if (first_d > second_d)
			first = first->parent;
		else
			second = second->parent;
	}
	while (first != second)
	{
		first = first->parent;
		second = second->parent;
	}
	return (first);
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
