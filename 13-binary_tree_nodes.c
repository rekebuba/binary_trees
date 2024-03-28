#include "binary_trees.h"

/**
 * binary_tree_nodes - A function that counts the nodes 
 * with at least 1 child in a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size_t
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
    if (tree == NULL)
	{
		return (0);
	}

	return (binary_tree_size(tree) - binary_tree_leaves(tree));
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

/**
 * binary_tree_leaves - A function that counts the leaves in a binary tree
 *
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size_t
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return (0);
	}

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
