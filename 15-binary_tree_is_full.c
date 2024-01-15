#include "binary_trees.h"

/**
 * full_check - checks if a binary tree is full
 *
 * @tree: binary tree to check
 *
 * Return: 1 if full, 0 if not
 */

int full_check(const binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if ((tree->left != NULL && tree->right == NULL) ||
			(tree->left == NULL && tree->right != NULL) ||
			full_check(tree->left) == 0 ||
			full_check(tree->right) == 0)

			return (0);
	}
	return (1);
}

/**
 * binary_tree_is_full - checks if a binary tree is full
 *
 * @tree: binary tree to check
 *
 * Return: 1 if full, 0 if not full or tree is NULL
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (full_check(tree));
}
