#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: tree that will be deleted
 * Return: Nothing just delete
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;
	if (tree->left != NULL)
	{
		free(tree->left->left);
		free(tree->left->right);
		free(tree->left);
	}
	if (tree->right != NULL)
	{
		free(tree->right->left);
		free(tree->right->right);
		free(tree->right);
	}
	free(tree);
}
