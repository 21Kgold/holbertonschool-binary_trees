#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree:  pointer to the root node of the tree to traverse
 * Return: number of leaves (nodes with no children) of a binary tree
*/

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int leaves = 1, sides = 0; /* Count root*/

	if (!tree)
		return (0);

	sides = sides + binary_tree_leaves(tree->left); /* true == 1 */
	sides = sides + binary_tree_leaves(tree->right);
	if (sides == 2)
		leaves++;
	return (leaves);
}
