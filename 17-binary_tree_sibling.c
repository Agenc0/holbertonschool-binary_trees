#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a given node
 * in a binary tree
 *
 * @node: node to find sibling of
 *
 * Return: sibling of node if successful, NULL if else
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
