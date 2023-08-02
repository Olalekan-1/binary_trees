#include "binary_trees.h"

/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root of tree to measure height from
 * Return: The height of tree, if tree is NULL return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left, right;

	if (tree == NULL)
		return (0);


	left  = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left > right ? left : right);
}
