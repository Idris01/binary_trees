#include "binary_trees.h"

/**
 * binary_tree_depth - Finds the depth of a given binary tree
 * @tree: pointer ot binary tree
 *
 * Return: integer depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);
	return (1 + binary_tree_depth(tree->parent));
}
