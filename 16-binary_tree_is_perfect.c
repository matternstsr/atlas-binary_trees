/* 16-binary_tree_is_perfect.c */


#include "binary_trees.h"

/**
* binary_tree_height - helper function to measure the height of the tree
* @tree: PTR to the root node of the tree
*
* Return: height of the tree
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);
	return (left_height > right_height ? left_height + 1 : right_height + 1);
}

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: PTR to the root node of the tree
* 
* Return: number of leaves in the tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
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
	if (tree == NULL)
		return (0);
	size_t height = binary_tree_height(tree);
	size_t leaves = binary_tree_leaves(tree);
	return (leaves == (1 << height) ? 1 : 0);
}
