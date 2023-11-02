#include "binary_trees.h"

/**
 * is_leaf - Check if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 *
 * Description: This function checks whether a given node in a binary tree is
 * a leaf node, meaning it has no children (neither left nor right child).
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Calculate the depth of a given node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: The depth of the node.
 *
 * Description: This function calculates the depth of a given node in a binary
 * tree by counting the number of edges from the node to the root.
 */
size_t depth(const binary_tree_t *tree)
{
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Find a leaf node in a binary tree.
 * @tree: A pointer to the root node of the tree to find a leaf in.
 *
 * Return: A pointer to the first encountered leaf node.
 *
 * Description: This function finds and returns a pointer to the
 * first leaf node encountered while traversing the binary tree.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Check if a binary tree is perfect recursively.
 * @tree: A pointer to the root node of the tree to check.
 * @leaf_depth: The depth of a leaf node in the binary tree.
 * @level: The level of the current node in the tree.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 *
 * Description: This function recursively checks if a binary tree is perfect,
 * which means that all leaf nodes have the same depth and all non-leaf nodes
 * have exactly two children.
 */
int is_perfect_recursive(const binary_tree_t *tree,
		size_t leaf_depth, size_t level)
{
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
		is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Check if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 *
 * Description: This function checks whether a binary tree is perfect, which
 * means that all leaf nodes have the same depth and all non-leaf nodes have
 * exactly two children.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}
