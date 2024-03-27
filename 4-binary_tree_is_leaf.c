#include "binary_trees.h"

/**
 * binary_tree_is_leaf - A function that checks if a node is a leaf
 *
 * @node: pointer to the node to check
 * Return: return 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	return (node->right == node->left);
}
