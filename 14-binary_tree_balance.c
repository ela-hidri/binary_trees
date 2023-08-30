#include "binary_trees.h"

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
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);
balance_factor = (int)(left_height - right_height);
}
return (balance_factor);
}
