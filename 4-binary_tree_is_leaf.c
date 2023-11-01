#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf, return 1.
 *         Otherwise, return 0.
 *
 * Description: This function determines if a given node is a leaf in a binary
 * tree. A leaf node is one that has no children (neither left nor right child).
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
