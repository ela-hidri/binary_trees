#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int s1 = 0, s2 = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL || tree->right != NULL)
	{
	s1 = binary_tree_height(tree->left) + 1;
	s2 = binary_tree_height(tree->right) + 1;
	}
	if (s1 > s2)
		return (s1);
	return (s2);
}
