#include "binary_trees.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * binary_tree_postorder - post-order
 * @tree: pointer to the root node of the tree to traverse
 * @func:  pointer to a function to call for each node.
 * Return: Nothing, just print
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, func);
	else
	{
		func(tree->n);
		return;
	}
	if (tree->right != NULL)
		binary_tree_postorder(tree->right, func);
	else
	{
		func(tree->n);
		return;
	}
	func(tree->n);
}
