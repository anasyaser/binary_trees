#include "binary_trees.h"

/**
 * array_to_bst - convert array to binary search tree
 *
 * @array: pointer to array to convert
 * @size: size of array
 * Return: pointer to tree root
 */

bst_t *array_to_bst(int *array, size_t size)
{
	size_t i;
	bst_t *root = NULL;

	if (size == 0)
		return (NULL);

	root = bst_insert(&root, array[0]);
	for (i = 1; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
