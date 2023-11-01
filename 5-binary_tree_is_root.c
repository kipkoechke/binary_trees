#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a node is the root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is the root, return 1.
 *         Otherwise, return 0.
 *
 * Description: This function determines if a given node is the root in a
 * binary tree. A root node is one that has no parent.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
