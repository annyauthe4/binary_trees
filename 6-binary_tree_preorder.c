#include "binary_trees.h"


/**
  * binary_tree_preorder - Goes through a tree using preorder
  * @tree: Pointer to the root node.
  * @func: Fuction to call for each node.
  *
  * Return: Void.
  */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);

	/* Recursively traverse the left and right node.*/
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
