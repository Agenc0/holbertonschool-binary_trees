#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a given node
 * in a binary tree
 *
 * @node: node to find uncle of
 *
 * Return: uncle of node if successful, NULL if else
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
