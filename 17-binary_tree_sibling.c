#include "binary_trees.h"

/**
 * binary_tree_sibling - A function that finds the sibling of a node
 *
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *result;

	if (!node)
	{
		return (NULL);
	}

	result = node->parent;

	if (!result)
	{
		return (NULL);
	}

	return (result->left == node ? result->right : result->left);
}
