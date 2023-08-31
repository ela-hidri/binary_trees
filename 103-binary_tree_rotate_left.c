#include "binary_trees.h"

/**
* binary_tree_rotate_left - performs a left rotation on a binary tree
* @tree: points to the tree to rotate
* Return: pointer to the new root of the rotated tree
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *tmp = tree->right;

if (tree == NULL || tree->right == NULL)
return (tree);

tree->right = tmp->left;
if (tmp->left != NULL)
tmp->left->parent = tree;

tmp->left = tree;
tmp->parent = tree->parent;
tree->parent = tmp;

return (tmp);
}
