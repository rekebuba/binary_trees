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

	return (binary_tree_height(tree->left) == binary_tree_height(tree->right));
}


/**
 * binary_tree_height - A function that measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: size_t
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_right = 0;
	size_t count_left = 0;

	if (!tree)
		return (0);

	count_right = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	count_left = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (max(count_right, count_left));
}

/**
 * max - return the maximum number
 *
 * @a: the first number
 * @b: the second number
 * Return: int
 */
int max(int a, int b)
{
	return (a > b ? a : b);
}
