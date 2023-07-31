#include "binary_trees.h"
/**
 * binary_tree_node - Creates new node of a binary tree
 * @parent: pointer to parent of the newly create node
 * @value: value of the created node
 *
 * Return: pointer to newly created node if success else NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	bst_t *new_node = NULL;

	new_node = malloc(sizeof(bst_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
