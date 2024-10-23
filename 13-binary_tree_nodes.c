/* 13-binary_tree_nodes.c */
#include "binary_trees.h"

/**
* binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree
* @tree: PTR to the root node of the tree
*
* Return: Number of nodes with at least 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	size_t count = 0;
	if (tree->left || tree->right)
		count = 1;
	return (count + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
