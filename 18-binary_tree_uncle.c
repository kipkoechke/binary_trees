#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: If node is NULL, has no parent, or has no grandparent, return NULL.
 *         Otherwise, return a pointer to the uncle node.
 *
 * Description: This function finds the uncle of a given node in a binary tree.
 * If the provided node is NULL, has no parent, or has no grandparent, it
 * returns NULL. Otherwise, it returns a pointer to the uncle node, which is
 * the sibling of the parent of the node's parent (grandparent's other child).
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
