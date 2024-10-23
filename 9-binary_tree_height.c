/* 9-binary_tree_height.c */

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

    /* Recursively get the height of both subtrees */
    left_height = binary_tree_height(tree->left);
    right_height = binary_tree_height(tree->right);

    /* If it's a single node (leaf), return 0; otherwise, return max height + 1 */
    return (left_height || right_height ? 1 +
			(left_height > right_height ? left_height : right_height) : 0);
}
