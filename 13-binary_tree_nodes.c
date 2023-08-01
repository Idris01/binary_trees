#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the number of nodes with at least one child
 * @tree: pointer to binary tree
 *
 * Return: integer number of nodes with at least one child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t node_value, left_value, right_value;

	if (tree == NULL)
		return (0);
	node_value = tree->left != NULL || tree->right != NULL ? 1 : 0;
	left_value = binary_tree_nodes(tree->left);
	right_value = binary_tree_nodes(tree->right);
	return (node_value + left_value + right_value);
}
