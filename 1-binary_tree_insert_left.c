#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node.
 * If parent already has a left-child, the new node * must take its place, and
 * the old left-child must be set as the left-child of the new node.
 * @parent: pointer to the node to insert the left-child in
 * @value:  is the value to store in the new node
 * Return: return a pointer to the created node, or NULL on failure or if
 * parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left = NULL;

	if (parent != NULL)
	{
		new_left = malloc(sizeof(binary_tree_t));
		if (new_left == NULL)
			return (NULL);

		new_left->parent = parent;
		new_left->n = value;
		new_left->left = NULL;
		new_left->right = NULL;

		if (parent->left != NULL)
		{
			new_left->left = parent->left;
			parent->left->parent = new_left;
		}
		parent->left = new_left;
	}
	return (new_left);
}
