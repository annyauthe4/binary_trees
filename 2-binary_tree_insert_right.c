#include "binary_trees.h"


/**
  * binary_tree_insert_right - Inserts node as the right child
  * of another node.
  * @parent: A pointer to the node to insert the right child.
  * @value: The value to store in the new node.
  *
  * Return: A pointer to the new node or NULL.
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Initialize new node.*/
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	/* Store parent right child in new node right.*/
	new_node->right = parent->right;

	/* If parent has a right child, it becomes new node right child*/
	if (parent->right)
		parent->right->parent = new_node;

	/* new node becomes updated as parent right child.*/
	parent->right = new_node;

	return (new_node);
}
