#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * Height balanced binary trees can be denoted by HB(k), where k is the
 * difference between heights of left and right subtrees. 'k' is known as the
 * balance factor. If for a tree, the balance factor (k) is equal to zero, then
 * that tree is known as a fully balanced binary tree. It can be denoted as
 * HB(0).
 * @tree:  pointer to the root node of the tree to traverse
 * Return: balance factor
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);

	if (tree->left)
	{
		l = binary_tree_balance(tree->left) + 1;
	}
	if (tree->right)
	{
		r = binary_tree_balance(tree->right) + 1;
	}
	return (l - r);
}
