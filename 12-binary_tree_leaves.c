#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree
* @tree: pointer to the root node of the tree to count the number of leaves
* Return: numbers of leaves in a tree
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t nbr_leaves = 0;

if (tree == NULL)
return (0);
if (tree->left == NULL && tree->right == NULL)
nbr_leaves += 1;
else
{
nbr_leaves = binary_tree_leaves(tree->left) +
binary_tree_leaves(tree->right);
}
return (nbr_leaves);
}
