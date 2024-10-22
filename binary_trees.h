/* BINARY_TREES_H */

#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stdlib.h>

/* binary tree node struct */
typedef struct binary_tree_s {
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

/* Function prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif
