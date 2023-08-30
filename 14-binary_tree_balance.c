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
s1 = _binary_tree_height(tree->left) + 1;
s2 = _binary_tree_height(tree->right) + 1;
}
if (s1 > s2)
	return (s1);
return (s2);
}

/**
* binary_tree_balance - measures the balance factor of a binary tree
* @tree: pointer to the root node of the binary tree
* Return: the balance factor of a binary tree
*/
int binary_tree_balance(const binary_tree_t *tree)
{
size_t left_height;
size_t right_height;
int balance_factor;

if (tree == NULL)
return (0);

else
{
left_height = _binary_tree_height(tree->left);
right_height = _binary_tree_height(tree->right);
balance_factor = left_height - right_height;
}
return (balance_factor);
}
