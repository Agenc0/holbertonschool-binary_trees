#include "binary_trees.h"

/**
 * binary_tree_inorder - navigates a binary tree via in-order traversal
 *
 * @tree: pointer to root node of tree to traverse
 * @func: function to call for each node
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_preorder(tree->left, func);
		func(tree->n);
		binary_tree_preorder(tree->right, func);
	}
}
