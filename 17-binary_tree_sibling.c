#include "binary_trees.h"


/**
  * binary_tree_sibling - Finds the sibling of a node.
  * @node: Pointer to the node to find the sibling.
  *
  * Return: Pointer to sibling or NULL.
  */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);
	/* If node is left child, return right sibling */
	if (node == node->parent->left)
		return (node->parent->right);

	/* Check if right, then return left */
	return (node->parent->left);
}
