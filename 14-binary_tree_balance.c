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

        return ((left_height > right_height ? left_height : right_height) + 1);
}
/**
  * binary_tree_balance - Measures the balance factor of a tree.
  * That is the diff btw the height of left and right subtrees.
  * @tree: Pointer to the root node to measure its balance factor.
  *
  * Return: int or 0.
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	/* Check if there is subtree, then measure the height.*/
	left_height = tree->left ? (int)binary_tree_height(tree->left) : 0;
	right_height = tree->right ? (int)binary_tree_height(tree->right) : 0;

	return (left_height - right_height);
}
