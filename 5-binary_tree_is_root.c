/* 5-binary_tree_is_root.c */
#include "binary_trees.h"

/**
* binary_tree_is_root - Checks if a given node is a root
* @node: PTR to node to check
*
* Return: 1 if node is a root, orwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent); /* Check node is not NULL & no parent */
}
