#include "binary_trees.h"

/**
 * binary_tree_node - Create a new binary tree node.
 * @parent: A pointer to the parent node.
 * @value: The value to be stored in the new node.
 *
 * Return: If an error occurs, return NULL.
 *         Otherwise, return a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    new_node = malloc(sizeof(binary_tree_t));
    if (new_node == NULL)
        return (NULL);

    new_node->n = value;
    new_node->parent = parent;
    new_node->left = NULL;
    new_node->right = NULL;

    return (new_node);
}
