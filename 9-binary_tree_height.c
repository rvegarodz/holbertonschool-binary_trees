#include "binary_trees.h"
/**
 *
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);
	if (tree->left != NULL)
		count++;
	if (tree->right != NULL)
		count++;
	return (count);

}
