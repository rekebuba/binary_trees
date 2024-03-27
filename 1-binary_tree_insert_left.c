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
	binary_tree_t *ptr = parent;

	if (ptr->left == NULL)
	{
		ptr->left = binary_tree_node(ptr, value);
	}
	else
	{
		temp = ptr->left;
		ptr->left = binary_tree_node(ptr, value);
		ptr->left->left = temp;
		ptr->left->left->parent = ptr->left;
	}
	return (ptr);
}
