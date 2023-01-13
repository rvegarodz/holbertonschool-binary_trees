#include "binary_trees.h"
/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to root node of tree
 * Return: height of tree (successful) NULL (failure)
 */
int binary_tree_height(const binary_tree_t *tree)
{
	int count, l_height, r_height;

	count = 0;

	if (tree == NULL)
		return (count);
	if (!tree->left && !tree->right)
	{
		count = 0;
		return (count);
	}
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);
	if (l_height > r_height)
		count = l_height + 1;
	else
		count = r_height + 1;
	return (count);
}
/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to root node
 * Return: 1 (perfect) or 0 (if not perfect)
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l_height, r_height, b_perfect_l, b_perfect_r;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		l_height = binary_tree_height(tree->left);
		r_height = binary_tree_height(tree->right);
		b_perfect_l = binary_tree_is_perfect(tree->left);
		b_perfect_r = binary_tree_is_perfect(tree->right);
		return (b_perfect_l && b_perfect_r && l_height == r_height);
	}
	return (0);
}
