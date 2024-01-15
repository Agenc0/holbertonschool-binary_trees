#include "binary_trees.h"

/**
 * is_leaf - checks if a binary tree node is a leaf
 * @node: node to check
 *
 * Return: 1 if leaf, 0 if else
 */

int is_leaf(const binary_tree_t *node)
{
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * get_depth - measures depth of a node
 * @node: node to measure depth of
 */

size_t get_depth(const binary_tree_t *node)
{
	return (node->parent != NULL ? 1 + get_depth(node->parent) : 0);
}

/**
 * get_leaf - searches for a leaf in a binary tree
 * @tree: tree to search
 *
 * Return: first leaf found
 */

const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	if (is_leaf(tree) == 1)
		return (tree);

	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect - checks if a binary tree is perfect
 * @tree: tree to check
 * @leafdepth: depth of a leaf in the tree
 * @h: height of current node
 *
 * Return: 1 if perfect, 0 if else
 */

int is_perfect(const binary_tree_t *tree, size_t leafdepth, size_t h)
{
	if (is_leaf(tree))
		return (h == leafdepth ? 1 : 0);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect(tree->left, leafdepth, h + 1) &&
		is_perfect(tree->right, leafdepth, h + 1));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to check
 *
 * Return: 1 if perfect, 0 if NULL or not perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_perfect(tree, get_depth(get_leaf(tree)), 0));
}
