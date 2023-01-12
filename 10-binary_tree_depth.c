#include "binary_trees.h"
/**
 *
 *
 *
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;

	if (tree == NULL)
		return (depth);
	
	if (tree->parent != NULL)
		depth = binary_tree_depth(tree->parent) + 1;
	return (depth);
}
