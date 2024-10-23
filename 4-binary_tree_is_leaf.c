/* 4-binary_tree_is_leaf.c */
#include "binary_trees.h"

/**
* binary_tree_is_leaf - Checks if a node is a leaf
* @node: Pointer to the node to check
*
* Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* Check node is not NULL & no children */
	if (node && !node->left && !node->right)
		return (1);
	return (0);
}
