#include "binary_trees.h"
/**
 * binary_tree_postorder - Traverse a binary tree in postorder manner
 * @tree: pointer to binary tree
 * @func: pointer to function to be applied on each node value of tree
 *
 * Return: always void
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
