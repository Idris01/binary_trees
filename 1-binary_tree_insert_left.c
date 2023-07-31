#include "binary_trees.h"
/**
 * binary_tree_insert_left - Insert new node at left of binary_tree
 * @parent: pointer to parent node to be inserted into its left tree
 * @value: value of the new node
 *
 * Return: pointer to new node if success else NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	bst_t *new_node = NULL, *temp = NULL;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(bst_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	/* insert the new node at the left of the parent */
	if (parent->left == NULL)
		parent->left = new_node;
	else
	{
		temp = parent->left;
		temp->parent = new_node;
		parent->left = new_node;
		new_node->left = temp;
	}

	return (new_node);
}
