#include "binary_trees.h"
/**
 * binary_tree_is_full - Checks if a given binary tree is full
 * @tree: pointer to a node of binary tree
 *
 * Return: integer 1 if full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int status; /* 1 if node of tree is full else 0 */
	int left_status, right_status;  /* 1 if left/right is full else 0 */

	if (tree == NULL)
		return (0);
	status = tree->left == NULL && tree->right == NULL;
	status = status == 1 || (tree->left != NULL && tree->right != NULL);

	left_status = tree->left == NULL ? 1 : binary_tree_is_full(tree->left);
	right_status = tree->right == NULL ? 1 : binary_tree_is_full(tree->right);
	return (status && left_status && right_status);
}
