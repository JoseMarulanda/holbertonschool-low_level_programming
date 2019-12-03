#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:is a pointer to the root node of the tree to measure the size
 * return: size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	const binary_tree_t *l, *r;
	if(!tree)
		return(0);
	l = tree->left;
	r = tree->right;

	return(binary_tree_size(l) + 1 + binary_tree_size(r));
}
