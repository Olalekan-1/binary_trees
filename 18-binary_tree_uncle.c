#include "binary_trees.h"

/**
 * binary_tree_uncle - check if a node has uncle
 * @node: Pointer to the node for which to find its uncle
 * Return: Pointer to the sibling node, or NULL if node is NULL
 * or has no uncle or parent is NULL
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node->parent || !node->parent->parent)
		return (NULL);

	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	else if (node->parent->parent->right == node->parent)
		return (node->parent->parent->left);
	else
		return (NULL);
}
