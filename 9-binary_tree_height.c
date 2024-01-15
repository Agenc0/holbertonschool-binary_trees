#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 *
 * @tree: binary tree to measure height of
 *
 * Return: height if successful, 0 if else
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l_height = 0, r_height = 0;

		l_height = tree->left ? binary_tree_height(tree->left) : 0;
		r_height = tree->right ? binary_tree_height(tree->right) : 0;
		return ((l_height > r_height) ? l_height : r_height);
	}

	return (0);
}
