#include "binary_trees.h"

/**
 * binary_tree_height - find the height of a binary tree
 * @tree: tree of binary tree
 *
 * Return: integer height of binary tree
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_height(tree) - 1);
}


/**
 * binary_height - An helper function for binary_tree_height
 * @tree: pointer to binary tree
 *
 * Return: integer dept of binary tree including the head node
 */

size_t binary_height(const binary_tree_t *tree)
{
	size_t left_depth, right_depth, ans;

	if (tree == NULL)
		return (0);
	left_depth = 1 + binary_height(tree->left);
	right_depth = 1 + binary_height(tree->right);

	ans = left_depth > right_depth ? left_depth : right_depth;

	return (ans);
}
