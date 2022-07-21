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
	int height_l = 0, height_r = 0;

	if (!tree)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_r = binary_tree_height(tree->right);

	return (height_l - height_r);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree:  pointer to the root node of the tree to traverse
 * Return: height of a binary tree
*/

size_t binary_tree_height(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (!tree)
		return (0);

	l = binary_tree_height(tree->left) + 1;
	r = binary_tree_height(tree->right) + 1;

	if (l >= r)
		return (l);
	else
		return (r);
}
