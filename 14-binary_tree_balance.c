#include "binary_trees.h"

/**
 * binary_tree_balance - calculate the balance factor of a tree
 * @tree: pointer to the root of tree to calculate balance factor
 * Return: The balance factor of a tree, if tree is NULL return 0
 */


size_t binary_tree_height1(const binary_tree_t *tree);

int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	/*return (1 + binary_tree_balance(tree->left) - */
	 /* binary_tree_balance(tree->right));*/

	left = binary_tree_height1(tree->left);
	right = binary_tree_height1(tree->right);

	return (left - right);
}


/*size_t binary_tree_height1(const binary_tree_t *tree);*/


/**
 * binary_tree_height1 - measure the height of a binary tree
 * @tree: pointer to the root of tree to measure height from
 * Return: The height of tree, if tree is NULL return 0
 */


size_t binary_tree_height1(const binary_tree_t *tree)
{

	size_t left_height, right_height;

	if (tree == NULL)
		return (0);


	left_height = binary_tree_height1(tree->left);
	right_height = binary_tree_height1(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
}
