#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: is a pointer to the root node of the tree to count the number of nodes
 * return: number of tree with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{

	const binary_tree_t *t = tree;
	if(!t || (!t->left && !t->right))
		return(0);
	return (binary_tree_nodes(t->left) + 1 + binary_tree_nodes(t->right));

}
