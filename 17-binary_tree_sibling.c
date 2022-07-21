#include "binary_trees.h"

/**
 * binary_tree_sibling -   finds the sibling of a node
 * @node:   pointer to the node to find the sibling
 * Return: return a pointer to the sibling node; if node is NULL or the parent
 * is NULL, return NULL. If node has no sibling, return NULL
*/

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node && node->parent)
	{
		if (node->parent->right != node && node->parent->right != NULL)
			return (node->parent->right);

		if (node->parent->left != node && node->parent->left != NULL)
			return (node->parent->left);
	}
	return (NULL);
}
