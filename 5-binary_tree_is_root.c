#include "binary_trees.h"

/**
 * binary_tree_is_root - checks if a binary tree node is the root
 *
 * @node: node to check
 *
 * Return: 1 if root, 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
