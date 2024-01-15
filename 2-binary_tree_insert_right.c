#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right-child
 * of another in a binary tree.
 *
 * @parent: node to insert right-child in
 * @value: value to assign to new node
 *
 * Return: new node if successful, NULL if else
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->left;
		parent->right->parent = new;
	}

	parent->right = new;

	return (new);
}
