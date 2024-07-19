#include "binary_trees.h"

/**
 * binary_trees_ancestor -  finds the lowest common ancestor of two nodes
 *
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: lowest common ancestor node of the given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{

	binary_tree_t *parent, *ancestor;

	if (!first || !second)
	{
		return (NULL);
	}

	parent = first->parent;
	ancestor = second->parent;

	if (parent == second)
		return (parent);
	else if (ancestor == first)
		return (ancestor);

	while (parent && parent != ancestor)
	{
		parent = parent->parent;
	}

	if (!parent)
	{
		parent = first->parent;

		while (ancestor && parent != ancestor)
		{
			ancestor = ancestor->parent;
		}
	}

	if (ancestor == parent)
		return (ancestor);

	return (NULL);
}
