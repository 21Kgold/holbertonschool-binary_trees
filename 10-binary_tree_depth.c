#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree:  pointer to the root node of the tree to traverse
 * Return: depth of a node in a binary tree
*/

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int d = 0;

	if (tree != NULL)
	{
		if (tree->parent)
		{
			d = binary_tree_depth(tree->parent) + 1;
		}
	}
	return (d);
}
