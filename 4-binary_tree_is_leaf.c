#include "binary_trees.h"
/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: pointer to node to check
 * Return: if node is a lead (1) if not (0)
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->parent != NULL && node->left == NULL && node->right == NULL)
		return (1);
	else
		return (0);
}
