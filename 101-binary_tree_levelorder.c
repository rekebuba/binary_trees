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
	int first = 0, last = 0;
	const binary_tree_t *a[100];

	if (!tree || !func)
		return;

	a[last++] = tree;
	func(a[first]->n);

	while (first != last)
	{

		if (a[first]->left)
		{
			func(a[first]->left->n);
			a[last++] = a[first]->left;
		}

		if (a[first]->right)
		{
			func(a[first]->right->n);
			a[last++] = a[first]->right;
		}

		first++;
	}
}
