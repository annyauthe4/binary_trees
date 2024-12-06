#include "binary_trees.h"


/**
  * binary_trees_ancestor - Finds the lowect commin ancestor
  * of two nodes.
  * @first: Pointer to the first node.
  * @second: Pointer to the second node.
  *
  * Return: Pointer to ancestor or NULL.
  */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	const binary_tree_t *temp_1st, *temp_2nd;

	if (!first || !second)
		return (NULL);
	temp_1st = first;
	temp_2nd = second;
	while (temp_1st)
	{
		temp_2nd = second;
		while (temp_2nd)
		{
			if (temp_1st == temp_2nd)
				return ((binary_tree_t *)temp_1st);
			temp_2nd = temp_2nd->parent;
		}

		temp_1st = temp_1st->parent;
	}
	return (NULL);
}
