#include "binary_trees.h"

/**
 * bst_search - get required node
 *
 * @tree: pointer to tree root
 * @value: value of required node
 * Return: pointer to required node of null if not found
 */

bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
		return (NULL);
	if (value > tree->n)
		return (bst_search(tree->right, value));
	else if (value < tree->n)
		return (bst_search(tree->left, value));
	return ((bst_t *)tree);

}
