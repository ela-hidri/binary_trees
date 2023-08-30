#include "binary_trees.h"

/**
* binary_tree_nodes - counts the nodes with at least 1 child in a tree
* @tree: pointer to the root of the tree
* Return: number of nodes with at least 1 child
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t nbr_nodes = 0;

if (tree == NULL)
return (0);

if (tree->right != NULL || tree->left != NULL)
nbr_nodes += 1;
else
{
nbr_nodes += binary_tree_nodes(tree->left) +
binary_tree_nodes(tree->right);
}
return (nbr_nodes);
}
