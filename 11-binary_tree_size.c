#include "binary_trees.h"


/**
  * binary_tree_size - Measures the total number of nodes in a tree.
  * @tree: Pointer to the root to measure the size.
  *
  * Return: The size of the tree or 0.
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_nodes_size, right_nodes_size;

	if (!tree)
		return (0);
	/* Recursively calc left and right nodes sizes.*/
	left_nodes_size = binary_tree_size(tree->left);
	right_nodes_size = binary_tree_size(tree->right);

	return (left_nodes_size + right_nodes_size + 1);
}
