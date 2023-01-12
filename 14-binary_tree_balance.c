#include "binary_trees.h"
/**
 *
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{	
	int balance = 0;

	if (tree == NULL)
		return (balance);
	else
	{
		balance = height_int(tree->left);
		balance = balance - height_int(tree->right);
	}
	return (balance);
}
