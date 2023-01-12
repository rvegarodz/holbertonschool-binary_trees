#include "binary_trees.h"
/**
 *
 *
 *
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (size);
	else
	{
		size = binary_tree_size(tree->left) + 1;
		size = size + binary_tree_size(tree->right);
		return (size);
	}
}
