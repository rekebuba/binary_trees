#include "binary_trees.h"

/**
 * binary_tree_uncle -  function that finds the uncle of a node
 *
 * @node: pointer to the node to find the uncle
 * Return: pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *result;

	if (!node || node->parent || node->parent->parent)
	{
		return (NULL);
	}

	result = node->parent->parent;

	return (result->left == node->parent ? result->right : result->left);
}
