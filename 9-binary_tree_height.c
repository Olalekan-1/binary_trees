#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root of tree to measure height from
 * Return: The height of tree, if tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left  = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (1 + (left > right ? left - 0 : right - 0));
}
