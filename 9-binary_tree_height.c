#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * binary_tree_height - hieght of a tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: Height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int height = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		height++;
	if (tree->right != NULL)
		height++;
	return (height);
}
