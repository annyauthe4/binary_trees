#include "binary_trees.h"


/**
  * binary_tree_uncle - Finds the uncle of a node.
  * @node: The node to find its uncle.
  *
  * Return: Pointer to uncle or NULL.
  */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	/* If node parent is grandma left child, return right */
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);

	/* If node parent is grandma right child return left */
	return (node->parent->parent->left);
}
