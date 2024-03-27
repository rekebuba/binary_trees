#include "binary_trees.h"

/**
 * binary_tree_insert_left - A function that inserts a node
 * as the left-child of another node
 *
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;
	if (parent->left == NULL)
	{
		parent->left = binary_tree_node(parent, value);
	}
	else
	{
		temp = parent->left;

		parent->left = binary_tree_node(parent, value);
		parent->left->left = temp;
		parent->left->left->parent = parent->left;
	}
	return (parent);
}
