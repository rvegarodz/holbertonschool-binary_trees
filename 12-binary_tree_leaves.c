#include "binary_trees.h"
/**
 *
 *
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);
	if (tree->right == NULL && tree->left == NULL)
		return (count + 1);
	else 
	{
		count = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
		return (count);
	}
}
