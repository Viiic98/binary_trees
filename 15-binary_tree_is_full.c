#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if it's full 0 if it isn't
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL && tree->right != NULL)
	{
		if ((binary_tree_is_full(tree->left) == 0 &&
		     binary_tree_is_full(tree->right) == 0) ||
		    (binary_tree_is_full(tree->left) == 1 &&
		     binary_tree_is_full(tree->right) == 1))
			return (1);
	}
	return (0);
}
