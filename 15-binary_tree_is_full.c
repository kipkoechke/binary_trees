#include "binary_trees.h"

/**
 * is_full_recursive - Check if a binary tree is full recursively.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is not full, return 0. Otherwise, return 1.
 *
 * Description: This function recursively checks if a binary tree is full,
 * meaning that every node in the tree has either zero or two children
 * (left and right).
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - Check if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If the tree is NULL or not full, return 0. Otherwise, return 1.
 *
 * Description: This function checks if a binary tree is full, meaning that
 * every node in the tree has either zero or two children (left and right).
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_full_recursive(tree));
}
