#include "binary_trees.h"

/**
* binary_tree_rotate_right - performs a right rotation on a binary tree
* @tree: points to the tree to rotate
* Return: pointer to the new root of the rotated tree
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *tmp = tree->left;

if (tree == NULL || tree->left == NULL)
return (tree);

tree->left = tmp->right;
if (tmp->right != NULL)
tmp->right->parent = tree;

tmp->right = tree;
tmp->parent = tree->parent;
tree->parent = tmp;

return (tmp);
}
