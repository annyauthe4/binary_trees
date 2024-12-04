#include "binary_trees.h"


/**
  * binary_tree_inorder - Goes through a binary tree
  * using inorder traversal (left, root, right).
  * @tree: Pointer to the root node
  * @func: Pointer to a function to call for each node.
  *
  * Return: Void.
  */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	/* Traverse the left child recursively.*/
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
