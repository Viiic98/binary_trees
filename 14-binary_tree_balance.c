#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: Balanced of a tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int n = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
	{
		n++;
		n += binary_tree_balance(tree->left);
	}
	if (tree->right != NULL)
	{
		n--;
		n -= binary_tree_balance(tree->right);
	}
	return (n);
}
