#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a node is the root
 * @node: pointer to node to check
 * Return: if node is a root (1) if not (0)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
