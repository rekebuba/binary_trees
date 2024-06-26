#include "binary_trees.h"

/**
 * binary_tree_levelorder - A function that goes through a binary tree
 * using level-order traversal
 *
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node
 * Return: void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
    if (!tree || !func)
    {
        return;
    }
}
