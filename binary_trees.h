/* BINARY_TREES_H */

#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>

/* binary tree node struct */
typedef struct binary_tree_s {
    int n; /* Node Value */
    struct binary_tree_s *parent;  /* PTR to parent node */
    struct binary_tree_s *left;    /* PTR to left child */
    struct binary_tree_s *right;   /* PTR to right child */
} binary_tree_t;

/* Function prototypes for binary tree operations */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value);
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value);
void binary_tree_delete(binary_tree_t *tree);
int binary_tree_is_leaf(const binary_tree_t *node);
int binary_tree_is_root(const binary_tree_t *node);
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int));

#endif /* BINARY_TREES_H */