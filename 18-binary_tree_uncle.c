#include "binary_trees.h"

/**
 * binary_tree_uncle -   finds the uncle of a node
 * @node: pointer to the node to find the uncle
 * Return: return a pointer to the uncle node; if node is NULL, the parent
 * is NULL or the granfather is NULL, return NULL. If node has no uncle,
 * return NULL
*/

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node && node->parent && node->parent->parent)
	{
		if (node->parent->parent->right != node->parent &&
			node->parent->parent->right != NULL)
			return (node->parent->parent->right);

		if (node->parent->parent->left != node->parent &&
			node->parent->parent->left != NULL)
			return (node->parent->parent->left);
	}
	return (NULL);
}
