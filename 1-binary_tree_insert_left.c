/* 1-binary_tree_insert_left.c */
#include "binary_trees.h"

/**
* binary_tree_insert_left - Inserts node as left-child node
* @parent: PTR to parent node
* @value: Value to store in new node
*
* Return: PTR to node made, NULL - failure or parent is NULL
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent) /* Check if parent is NULL */
		return (NULL);
	new_node = binary_tree_node(parent, value); /* Create a new node */
	if (!new_node)
		return (NULL);
	/* If parent already has a left-child */
	if (parent->left)
	{
		new_node->left = parent->left; /* Set old left-child as left newnode */
		parent->left->parent = new_node; /* Update parent PTR old left-child */
	}
	parent->left = new_node; /* Assign new node as left-child of parent */
	return (new_node);
}
