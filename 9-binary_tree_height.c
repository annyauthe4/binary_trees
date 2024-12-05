#include "binary_trees.h"


/**
  * binary_tree_height - Measures the height of a binary tree.
  * @tree: Pointer to the root node of a tree.
  *
  * Return: height or 0 on failure.
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	/* Recursively get the height of left and right subtrees.*/
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (1 + (left_height > right_height ? left_height : right_height));
}
