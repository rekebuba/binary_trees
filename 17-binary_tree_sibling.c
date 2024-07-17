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

	if (!node || node->parent)
	{
		return (NULL);
	}

	result = node->parent;

	return (result->left == node ? result->right : result->left);
}
