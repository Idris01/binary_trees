#include "binary_trees.h"

/**
 * binary_tree_balance - Calculate the balance factor of binary tree
 * @tree: pointer to root of binary tree
 *
 * Return: integer balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);
	left_height = count_binary_left(tree->left);
	right_height = count_binary_right(tree->right);
	return (left_height - right_height);
}

/**
 * count_binary_left - Count all left nodes
 * @left_child: pointer to the left_child of binary tree
 *
 * Return: integer number of nodes in the left of binary tree
 */
int count_binary_left(const binary_tree_t *left_child)
{
	if (left_child == NULL)
		return (0);
	return (1 + count_binary_left(left_child->left));
}


/**
 * count_binary_right - Count all right nodes
 * @right_child: pointer to the right_child of binary tree
 *
 * Return: integer number of nodes in the right of binary tree
 */

int count_binary_right(const binary_tree_t *right_child)
{
	if (right_child == NULL)
		return (0);
	return (1 + count_binary_right(right_child->right));
}
