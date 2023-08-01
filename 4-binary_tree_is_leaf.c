#include "binary_trees.h"
/**
 * binary_tree_is_leaf - Checks if a node of binary tree is leaf or not
 * @node: node of a binary_tree
 *
 * Return: return 1 if true else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}

