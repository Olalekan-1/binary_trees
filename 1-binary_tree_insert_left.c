#include "binary_trees.h"

/**
 * binary_tree_insert_left - insert new_node
 * to the left child of a parent
 * @parent: pointer to the parent node
 * @value: data of the parent
 * Return: pointer to the new created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{

	binary_tree_t *new_node, *temp;

	if (parent == NULL)
	{
		return (NULL);
	}


	new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		temp = (parent->left);
		parent->left = new_node;
		new_node->left = temp;
		new_node->left->parent = new_node;
	}

	else
		parent->left = new_node;
	/*parent->left->left = temp;*/
	return (new_node);
}
