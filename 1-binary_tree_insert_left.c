#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>
/**
*
*
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

    if (parent == NULL)
        return (NULL);

    node = malloc(sizeof(binary_tree_t));
    if (node == NULL)
        return (NULL);
    if (parent->left != NULL)
    {
        node->left = parent->left;
        parent->left->parent = node;
    }
    else
        node->left = NULL;
    parent->left = node;
    node->parent = parent;
    node->right = NULL;
    node->n = value;
    return (node);
}