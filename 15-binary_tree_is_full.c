#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * A full tree means all it's nodes have no children or 2 children
 * @tree:  pointer to the root node of the tree
 * Return: if tree is NULL or not full, return 0, for full tree return 1
*/

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree || (!tree->left && tree->right) || (tree->left && !tree->right))
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
