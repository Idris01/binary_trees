#include "binary_trees.h"
/**
 * binary_tree_leaves - Count the number of trees in a binary tree
 * @tree: pointer to binary tree
 *
 * Return: integer number of leaves in the tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves, right_leaves;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);
	return (left_leaves + right_leaves);
}
