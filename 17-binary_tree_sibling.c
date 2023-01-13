#include "binary_trees.h"
/**
 *
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *temp_node;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	else
	{
		temp_node = malloc(sizeof(binary_tree_t));
		if (temp_node == NULL)
			return (NULL);
		
		temp_node = node->parent;
		if (temp_node->left == node)
			temp_node = temp_node->right;
		if (temp_node->right == node)
			temp_node = temp_node->left;
		if (temp_node != NULL)
			return (temp_node);
	}
	return (NULL);
}
