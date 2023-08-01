#include "binary_trees.h"
/**
 * binary_tree_insert_right - Insert new node at right of binary_tree
 * @parent: pointer to parent node to be inserted into its right tree
 * @value: value of the new node
 *
 * Return: pointer to new node if success else NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	bst_t *new_node = NULL, *temp = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(bst_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->right = NULL;
	new_node->left = NULL;

	/* insert the new node at the right of the parent */
	if (parent->right == NULL)
		parent->right = new_node;
	else
	{
		temp = parent->right;
		temp->parent = new_node;
		parent->right = new_node;
		new_node->right = temp;
	}

	return (new_node);
}
