/* 18-binary_tree_uncle.c */
#include "binary_trees.h"
#include "17-binary_tree_sibling.c"

/**
* binary_tree_uncle - finds the uncle of a node
* @node: PTR to the node to find the uncle
*
* Return: PTR to the uncle node, or NULL
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	return (binary_tree_sibling(node->parent));
}
