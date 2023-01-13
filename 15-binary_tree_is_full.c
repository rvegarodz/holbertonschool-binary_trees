#include "binary_trees.h"
/**
 * binary_tree_is_full - function that checks if a binary tree is full
 * @tree: pointer to root node
 * Return: 1 (full) or 0 (not full)
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
