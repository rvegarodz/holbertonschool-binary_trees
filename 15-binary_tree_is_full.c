#include "binary_trees.h"
/**
 *
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l_full_b, r_full_b;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		l_full_b = binary_tree_is_full(tree->left);
		r_full_b = binary_tree_is_full(tree->right);
		
		return (l_full_b && r_full_b);
	}
	return (0);
}
