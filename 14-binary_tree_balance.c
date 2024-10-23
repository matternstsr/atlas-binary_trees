#include "binary_trees.h"

/**
* binary_tree_balance - Measures the balance factor of a binary tree
* @tree: Pointer to the root node of the tree
*
* Return: Balance factor of the tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (left_height - right_height);
}

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
