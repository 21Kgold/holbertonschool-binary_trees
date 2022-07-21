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

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the node to check for lowest ancestor
 * @second: pointer to the node to check for lowest ancestor
 * Return:  pointer to the lowest common ancestor node of the two given nodes
 * If no common ancestor was found, return NULL
*/

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second || first == second->parent)
		return ((binary_tree_t *)first);
	
	if (second == first->parent)
		return ((binary_tree_t *)second);

	if (are_you_my_ancestor(first, second) == first)
		return ((binary_tree_t *)first);
	else
		return (binary_trees_ancestor(first->parent, second));
}

binary_tree_t *are_you_my_ancestor(const binary_tree_t *first,
	const binary_tree_t *second)
{
	if (first && second)
	{
		if (second->parent == first)
			return ((binary_tree_t *)first);
		if (second->parent == NULL)
			return (NULL);
		if (second->parent)
			return (are_you_my_ancestor(first, second->parent));
	}
	return (NULL);
}
