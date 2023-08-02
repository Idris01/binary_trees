#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of
 * two nodes in a binary tree
 * @first: pointer to first node
 * @second: pointer to second node
 *
 * Return: pointer to common ancestor if found, otherwise NULL
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *parent1 = NULL, *parent2 = NULL;
	int parent1_count = 0, parent2_count = 0;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((void *)first);
	parent1 = (void *)first;
	parent2 = (void *)second;
	while (parent1 != NULL || parent2 != NULL)
	{
		parent1 = parent1 == NULL ? NULL : parent1->parent;
		parent1_count += parent1 == NULL ? 0 : 1;
		parent2 = parent2 == NULL ? NULL : parent2->parent;
		parent2_count += parent2 == NULL ? 0 : 1;
	}
	parent1 = (void *)first;
	parent2 = (void *)second;
	while (parent1 != NULL || parent2 != NULL)
	{
		if (parent1 == parent2)
			return (parent1);
		if (parent1_count < parent2_count--)
			parent2 = parent2 == NULL ? NULL : parent2->parent;
		else if (parent1_count-- > ++parent2_count)
			parent1 = parent1 == NULL ? NULL : parent1->parent;
		else
		{
			parent2_count--;
			parent1 = parent1 == NULL ? NULL : parent1->parent;
			parent2 = parent2 == NULL ? NULL : parent2->parent;
		}
	}
	return (NULL);
}
