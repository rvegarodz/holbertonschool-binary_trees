#include "binary_trees.h"
/**
 *
 *
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count, l_height, r_height;

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
