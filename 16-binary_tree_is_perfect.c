#include "binary_trees.h"

/**
 * binary_tree_is_perfect - A function that checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to measure the size
 * Return: int
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_size(tree->left) == binary_tree_size(tree->right));
}


/**
 * binary_tree_size - A function that measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size_t
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
