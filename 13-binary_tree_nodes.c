#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: pointer to root node
 * Return: number of nodes with childs (successfull) 0 (failure)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (count);
	if (tree->right != NULL || tree->left != NULL)
	{
		count = binary_tree_nodes(tree->right) + 1;
		count = count + binary_tree_nodes(tree->left);
	}
	return (count);
}
