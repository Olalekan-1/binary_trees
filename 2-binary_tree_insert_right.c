#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert new_node
 * to the left child of a parent
 * @parent: pointer to the parent node
 * @value: data of the parent
 * Return: pointer to the new created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node, *temp;

	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		temp = (parent->right);
		parent->right = new_node;
		if (new_node->right == NULL)
		{
			new_node->right = temp;
			new_node->right->parent = new_node;
		}
	}

	if (parent->right == NULL)
		parent->right = new_node;

	return (parent->left);
}
