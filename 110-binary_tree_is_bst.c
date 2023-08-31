#include "binary_trees.h"

/**
 * tree_is_bst - checks if a binary tree is a valid
 * @tree: pointer to the root node of the tree to check
 * @min: min val
 * @max: max vl
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int tree_is_bst(const binary_tree_t *tree, int min, int max)
{
	if (tree != NULL)
	{
		if (tree->n < min || tree->n > max)
			return (0);
		return (tree_is_bst(tree->left, min, tree->n - 1) &&
				tree_is_bst(tree->right, tree->n + 1, max));
	}
	return (1);
}
/**
 * binary_tree_is_bst - checks if a binary tree is a valid
 * @tree: pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, and 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	return (tree_is_bst(tree, INT_MIN, INT_MAX));
}
