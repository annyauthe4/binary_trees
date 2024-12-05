#include "binary_trees.h"


/**
  * binary_tree_leaves - Counts leaves in a binary tree.
  * @tree: Pointer to the root node to count.
  *
  * Return: Number of leaves or 0.
  */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* Check if it is a leaf.*/
	if (!tree->left && !tree->right)
		return (1);
	/* Recursively traverse left and right subtrees.*/
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
