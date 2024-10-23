/* 16-binary_tree_is_perfect.c */


#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree
* @tree: PTR to the root node of the tree to measure the height
*
* Return: Height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (!tree->left && !tree->right)
		return (0);
	return (1 + (left_height > right_height ? left_height : right_height));
}


/**
* binary_tree_leaves - Counts the leaves in a binary tree
* @tree: PTR to the root node of the tree
*
* Return: Number of leaves in the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}


/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: PTR to the root node of the tree to check
* 
* Return: 1 if perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height, leaves;

	if (tree == NULL)
		return (0);
	height = binary_tree_height(tree);
	leaves = binary_tree_leaves(tree);
	return (leaves == (1 << height) ? 1 : 0);
}
