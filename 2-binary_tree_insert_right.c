#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_tree_insert_right - Insert a new node to right
 * @parent: parent of the new tree
 * @value: value of the new tree
 * Return: pointer to new tree
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	else
		node->right = NULL;
	parent->right = node;
	node->parent = parent;
	node->left = NULL;
	node->n = value;

	return (node);
}
