#include "binary_trees.h"
/**
 * binary_tree_is_root - Checks if the node is root node of binary tree
 * @node: pointer to node of binary tree
 *
 * Return: 1 if node is the root node else 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
