#include "binary_trees.h"


/**
  * binary_tree_nodes - Counts node with at least 1 child.
  * @tree: Pointer to the root node to count.
  *
  * Return: node count or 0.
  */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		return (1 + (binary_tree_nodes(tree->left) +
			binary_tree_nodes(tree->right)));
	}
	return (0);
}
