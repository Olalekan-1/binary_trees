#include "binary_trees.h"

/**
 * binary_tree_sibling - check if a node has sibing
 * @node: Pointer to the node for which to find its sibling
 * Return: Pointer to the sibling node, or NULL if node is NULL
 * or has no sibling or parent is NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	else if (node->parent->right == node)
		return (node->parent->left);
	else
		return (NULL);
}
