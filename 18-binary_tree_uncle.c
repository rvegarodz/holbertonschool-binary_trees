#include "binary_trees.h"
/**
 *
 *
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
        if (node == NULL || node->parent->parent == NULL)
                return (NULL);
        else
        {
                if (node->parent->parent->right == node->parent)
                        return (node->parent->parent->left);
		else
                        return (node->parent->parent->right);
        }
        return (NULL);
}
