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

#endif /* BINARY_TREES_H */