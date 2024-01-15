#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as left-child
 * of another in a binary tree.
 *
 * @parent: node to insert left-child in
 * @value: value to assign to new node
 *
 * Return: new node if successful, NULL if else
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = binary_tree_node(parent, value);
	
	if(new == NULL || parent == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left->parent = new;
	}

	parent->left = new;

	return (new);
}
