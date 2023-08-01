#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Checks if a binary tree is prefect
 * @tree: pointer to node of binary tree
 *
 * Return: 1 if tree is perfect otherwise 0
 *
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int all_two, left_depth, right_depth;

	if (tree == NULL)
		return (0);
	all_two = _is_perfect_helper(tree);
	if (!all_two)
		return (0);
	left_depth = count_binary_left(tree->left);
	right_depth = count_binary_right(tree->right);

	return (all_two && (left_depth == right_depth ? 1 : 0));
}

/**
 * _is_perfect_helper - A recursive helper function that check if all nodes
 * of a binary tree has either 0 or 2 children
 * @tree: pointer to tree node
 *
 * Return: integer 1 if all nodes has either 0 or 2 children
 */
int _is_perfect_helper(const binary_tree_t *tree)
{
	int status, left, right;

	if (tree == NULL)
		return (0);
	status = tree->left == NULL && tree->right == NULL;
	status = status || (tree->left != NULL && tree->right != NULL);
	if (!status)
		return (status);
	left = tree->left == NULL ? 1 : binary_tree_is_perfect(tree->left);
	right = tree->right == NULL ? 1 : binary_tree_is_perfect(tree->right);
	return (status && left && right);
}
