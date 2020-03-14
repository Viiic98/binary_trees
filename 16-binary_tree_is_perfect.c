#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * levels - check how many levels are in a tree and compare them
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if are the same levels, 0 if not
 */
int levels(const binary_tree_t *tree)
{
	const binary_tree_t *tail = tree;
	int l = 0, r = 0;

	while (tail->left != NULL)
		tail = tail->left, l++;
	tail = tree;
	while (tail->right != NULL)
		tail = tail->right, r++;
	if (l - r == 0)
		return (1);
	return (0);
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if its perfect 0 if is not perfect
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
		if (tree->left != NULL && tree->right != NULL)
		{
			if (binary_tree_is_perfect(tree->left) +
			    binary_tree_is_perfect(tree->right) == 2)
				if (levels(tree) == 1)
					return (1);
				else
					return (0);
			else
				return (0);
		}
		else
			return (0);
	}
	return (1);
}
