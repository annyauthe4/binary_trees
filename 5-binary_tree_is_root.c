#include "binary_trees.h"


/**
  * binary_tree_is_root - Checks if a given node is a root.
  * @root: Pointer to the node to check.
  *
  * Return: 1 on success, else 0.
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
