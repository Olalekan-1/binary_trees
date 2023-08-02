#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: Pointer to the root of the binary tree
 * Return: Size of the binary tree, or 0 if tree is NULL
 */


size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size;

	if (tree == NULL)
		return (0);
	size = binary_tree_size(tree->left) + binary_tree_size(tree->right);

	return (1 + size);
}

