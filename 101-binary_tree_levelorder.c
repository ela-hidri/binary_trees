#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);
void levelorder(const binary_tree_t *tree, void (*func)(int), int level);
/**
 * binary_tree_levelorder -  goes through a binary tree using
 * level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func:  pointer to a function to call for each node
 *
 * Return: nothing
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int i, l = (int)binary_tree_height(tree);

	for (i = 1; i <= l + 1; i++)
		levelorder(tree, func, i);

}
/**
 * levelorder - level order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func:  pointer to a function to call for each node
 * @level: node level
 *
 * Return: nothing
 */
void levelorder(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree == NULL || func == NULL)
		return;
	if (level == 1)
	{
		func(tree->n);
	}
	else if (level > 1)
	{
		levelorder(tree->left, func, level - 1);
		levelorder(tree->right, func, level - 1);
	}
}
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
