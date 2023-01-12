#include "binary_trees.h"
/**
 *
 *
 *
 */
int height_int(const binary_tree_t *tree)
{
	int count, l_height, r_height;

	count = 0;

	if (tree == NULL)
		return (count);
	else
	{
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
	}
	return (count);
}
