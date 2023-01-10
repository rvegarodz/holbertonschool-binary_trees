#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert new node at the left of the parent
 * @parent: parent node
 * @value: value to add in new node
 * Return: pointer to new node (success) or NULL (failure)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	new_node->right = NULL;
	if (parent->left != NULL)
	{
		temp = parent->left;
		parent->left = new_node;
		new_node->left = temp;
		temp->parent = new_node;
	}
	else
	{
		parent->left = new_node;
		new_node->left = NULL;
	}
	return (new_node);
}
