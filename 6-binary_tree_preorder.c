#include "binary_trees.h"
/**
 * binary_tree_preorder - Traverse a binary tree in preorder manner
 * @tree: pointer to binary tree
 * @func: pointer to function to be applied on each node value of tree
 *
 * Return: always void
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
