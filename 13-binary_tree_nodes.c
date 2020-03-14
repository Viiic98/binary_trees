#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes that have at least 1 child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t n = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		n++;
		if (tree->left != NULL)
			n += binary_tree_nodes(tree->left);
		if (tree->right != NULL)
			n += binary_tree_nodes(tree->right);
	}
	return (n);
}
