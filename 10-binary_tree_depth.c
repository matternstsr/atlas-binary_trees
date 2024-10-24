/* 10-binary_tree_depth.c */
#include "binary_trees.h"

/**
* binary_tree_depth - Measures the depth of a node in a binary tree
* @tree: PTR to the node to measure the depth
*
* Return: Depth of the node
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree && tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
