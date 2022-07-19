#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of a binary tree
 * @tree:  pointer to the root node of the tree to traverse
 * Return: number of nodes of a binary tree
*/

size_t binary_tree_size(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree == NULL)
		return (0);
	else
	{
		if (tree->left)
		{
			l = binary_tree_size(tree->left) + 1;
		}
		if (tree->right)
		{
			r = binary_tree_size(tree->right) + 1;
		}
	}
	if (l < r)
		return (l + 1);
	else
		return (r +1);
}
