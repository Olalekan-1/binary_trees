#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common acesstor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: The lowest common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	const binary_tree_t *temp_1, *temp_2;

	if (!first || !second)
		return (NULL);

	temp_1 = first;
	temp_2 = second;

	while (temp_1)
	{
		while (temp_2)
		{
			if (temp_1->parent == temp_2->parent)
			{
				return (temp_1->parent);
			}
			temp_2 = temp_2->parent;
		}

		temp_1 = temp_1->parent;
		/*temp_2 = temp_2->parent;*/
	}

	return  (NULL);
}

