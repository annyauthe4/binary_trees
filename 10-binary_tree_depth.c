#include "binary_trees.h"


/**
  * binary_tree_depth - Measures the distance btw a node
  * and the root node.
  * @tree: Pointer to the node to measure.
  *
  * Return: Size of the depth or 0.
  */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth;

	depth = 0;
	if (tree == NULL)
		return (0);
	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
