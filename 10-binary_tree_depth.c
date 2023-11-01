#include "binary_trees.h"

/**
 * binary_tree_depth - Measure the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL or has no parent, return 0; otherwise,
 *          return the depth.
 *
 * Description: This function calculates the depth of a node in a binary tree.
 * The depth is defined as the number of edges in the path from the node to
 * the root.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

