#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 * Return: balance factor
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left_height - right_height);
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

	count_left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	count_right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (max(count_left, count_right));
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
