#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of a binary tree
 * @tree: Pointer to the root of the binary tree
 * Return: Depth of the binary tree, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp = tree;

	while (temp->parent != NULL)
	{
		depth++;
		temp = temp->parent;
	}

	return (depth);
}

