#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *b_tree;

	b_tree = malloc(sizeof(binary_tree_t));
	if (b_tree == NULL)
		return (NULL);
	b_tree->parent = parent;
	b_tree->left = NULL;
	b_tree->right = NULL;
	b_tree->n = value;
	return (b_tree);
}
