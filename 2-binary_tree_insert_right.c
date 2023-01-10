#include "binary_trees.h"
/**
 * binary_tree_insert_right - insert new node at the right of the parent
 * @parent: parent node
 * @value: value to add in new node
 * Return: pointer to new node (success) or NULL (failure)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *temp;

	if (parent == NULL)
		return (NULL);
	/** allocate memory for new node **/
	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);
	/** modify new_node **/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	if (parent->right != NULL)
	{
		temp = parent->right;
		parent->right = new_node;
		new_node->right = temp;
		temp->parent = new_node;
	}
	else
	{
		parent->right = new_node;
		new_node->right = NULL;
	}
	return (new_node);
}
