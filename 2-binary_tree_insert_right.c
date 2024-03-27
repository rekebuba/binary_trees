#include "binary_trees.h"

/**
 * binary_tree_insert_right - A function that inserts a node
 * as the right-child of another node
 *
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: binary_tree_t*
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;
	binary_tree_t *ptr = parent;

	if (parent == NULL)
	{
		return (NULL);
	}

	if (ptr->right == NULL)
	{
		ptr->right = binary_tree_node(ptr, value);
	}
	else
	{
		temp = ptr->right;
		ptr->right = binary_tree_node(ptr, value);
		ptr->right->right = temp;
		ptr->right->right->parent = ptr->right;
	}
	return (ptr);
}
