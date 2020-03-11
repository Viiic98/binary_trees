#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_is_leaf - Checks if is a leaf
 * @node: Node to check
 * Return: 1 if it is, 0 if it isn't
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
