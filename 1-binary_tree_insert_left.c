#include "binary_trees.h"


/**
  * binary_tree_insert_left - Inserts node as the left child
  * of another node.
  * @parent: A pointer to the node to insert the left child in
  * @value: The value to store in the new node
  *
  * Return: Pointer to the created node else NULL.
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	/* Parent left child(if any) is stored as new node left child.*/
	new_node->left = parent->left;

	/* If parent has a left child, let it become a child to new node*/
	if (parent->left)
		parent->left->parent = new_node;
	/* Let new node becomes the parent's left child.*/
	parent->left = new_node;

	return (new_node);
}
