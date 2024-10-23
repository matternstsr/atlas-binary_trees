/* 2-binary_tree_insert_right.c */
#include "binary_trees.h"

/**
* binary_tree_insert_right - Inserts a node as right-child of another node
* @parent: PTR to the parent node
* @value: Value to store in the new node
*
* Return: PTR to the made node, or NULL on failure or if parent is NULL
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)  /* Check if parent is NULL */
		return (NULL);
	new_node = binary_tree_node(parent, value);  /* Create a new node */
	if (!new_node)
		return (NULL);
	/* If parent already has a right-child */
	if (parent->right)
	{
		new_node->right = parent->right;  /* old rt-child as rt of new node */
		parent->right->parent = new_node; /* set parent PTR of old rt-child */
	}
	parent->right = new_node;  /* Assign new node as right-child of parent */
	return (new_node);
}
