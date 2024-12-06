#include "binary_trees.h"


/**
  * binary_tree_is_full - Checks if a binary tree is full.
  * @tree: Pointer to the root node to check.
  *
  * Return: 1 or 0 if not.
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	/* If node is leaf */
	if (!tree->left && !tree->right)
		return (1);

	/* If node has both left and right children */
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
	/* If node has only one child, it is not full */
	return (0);
}
