/* 6-binary_tree_preorder.c */
#include "binary_trees.h"

/**
* binary_tree_preorder - Goes back through a binary tree using pre-order
* @tree: PTR to root node of tree to traverse
* @func: PTR to a function to call for each node
*/
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)  /* Check if tree and func are not NULL */
	{
		func(tree->n); /* Call func on current node */
		binary_tree_preorder(tree->left, func); /* go back on left subtree */
		binary_tree_preorder(tree->right, func); /* go back on right subtree */
	}
}
