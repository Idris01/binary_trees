#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds sibling of a given node of binary tree
 * @node: pointer to node to find node of
 *
 * Return: pointer to sibling of node if found else NULL
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;

	if (parent->left == node)
		return (parent->right);
	return (parent->left);
}
