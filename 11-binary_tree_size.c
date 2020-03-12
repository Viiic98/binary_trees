#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_size - Size of a tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of a tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		size += binary_tree_size(tree->left);
	}
	if (tree->right != NULL)
	{
		size += binary_tree_size(tree->right);
	}
	return (size);
}
