#include "binary_trees.h"

/**
 * binary_tree_node - A function that creates a binary tree node
 *
 * @parent: A pointer to the parent node of the node to create
 * @value: is the value to put in the new node
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *result = malloc(1 * sizeof(binary_tree_t));

	if (!result)
	{
		return (NULL);
	}

	result->parent = parent;
	result->n = value;
	result->right = NULL;
	result->left = NULL;
	return (result);
}
