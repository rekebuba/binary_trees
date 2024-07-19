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
	const binary_tree_t *a, *b;

	if (!first || !second)
		return (NULL);

	a = first;
	b = second;

	while (a != b)
	{
		a = a ? a->parent : second;
		b = b ? b->parent : first;
	}

	return ((binary_tree_t *)a);
}
