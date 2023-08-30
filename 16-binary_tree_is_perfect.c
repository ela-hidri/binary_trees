#include "binary_trees.h"

/**
* _binary_tree_height - measures the hight of a binary tree
* @tree: pointer to the root of the binary tree
* Return: the height of a binary tree
*/
int _binary_tree_height(const binary_tree_t *tree)
{
int s1 = 0, s2 = 0;

if (tree == NULL)
	return (0);
if (tree->left != NULL || tree->right != NULL)
{
s1 = _binary_tree_height(tree->left);
s2 = _binary_tree_height(tree->right);
}
if (s1 > s2)
	return (s1);
return (s2);
}

/**
* _binary_tree_is_perfect - helper function to check if a binary tree is perfect
* @tree: points to the root of the binary tree
* @height: the height of the binary tree
* @level: the level where to check
* Return: True if the binary tree is perfect, False otherwise
*/
bool _binary_tree_is_perfect(const binary_tree_t *tree, int height, int level)
{
if (tree == NULL)
return (true);

if (tree->left == NULL && tree->right == NULL)
return (height == level);

if (tree->left == NULL || tree->right == NULL)
return (false);

return (_binary_tree_is_perfect(tree->left, height, level + 1) &&
_binary_tree_is_perfect(tree->right, height, level + 1));
}

/**
* binary_tree_is_perfect - checks if a binary tree is perfect
* @tree: points to the root of the binary tree
* Return: 1 if the tree is perfect, 0 otherwise
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
int height;

if (tree == NULL)
return (0);

height = _binary_tree_height(tree);
return (_binary_tree_is_perfect(tree, height, 0));
}
