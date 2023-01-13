#include "binary_trees.h"
/**
 * binary_tree_depth - function that measures the depth of a node
 * @tree: pointer to node to measure
 * Return: depth of node (successfull) NULL (failure)
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
