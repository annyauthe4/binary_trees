#include "binary_trees.h"


/**
  * binary_tree_height - Measures the height of a binary tree.
  * @tree: Pointer to the root node of the tree to measure the height.
  *
  * Return: Height of the tree or 0 if tree is NULL.
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
  * binary_tree_is_perfect_recursive - Checks if a binary tree is perfect.
  * @tree: Pointer to the root node of the tree to check.
  * @depth: Expected depth of all leaves.
  * @level: Current depth of the node.
  *
  * Return: 1 if the tree is perfect, 0 otherwise.
  */
static int binary_tree_is_perfect_recursive(const binary_tree_t *tree,
	int depth, int level)
{
	if (!tree)
		return (1);

	/* Check if it's a leaf node */
	if (!tree->left && !tree->right)
		return (depth == level + 1);

	/* If one child is missing, it's not perfect */
	if (!tree->left || !tree->right)
		return (0);

	/* Recursively check left and right subtrees */
	return (binary_tree_is_perfect_recursive(tree->left, depth, level + 1) &&
		binary_tree_is_perfect_recursive(tree->right, depth, level + 1));
}

/**
  * binary_tree_is_perfect - Checks if all internal nodes has
  * exactly two children and all leaf nodes are at the same level.
  * @tree: Pointer to the root node of the tree to check.
  *
  * Return: 1 if perfect, else 0.
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int depth;

	if (!tree)
		return (0);

	/* Calculate the depth of the tree */
	depth = (int)binary_tree_height(tree);

	/* Check if the tree is perfect recursively */
	return (binary_tree_is_perfect_recursive(tree, depth, 0));
}
