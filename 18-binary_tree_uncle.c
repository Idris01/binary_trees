#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a given node of binary tree
 * @node: pointer to node of binary tree to find uncle of
 *
 * Return: Pointer to uncle if found else NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent = NULL, *temp = NULL;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;
	temp = parent;
	if (parent->parent == NULL)
		return (NULL);
	parent = parent->parent;

	if (parent->left == temp)
		return (parent->right);
	return (parent->left);
}
