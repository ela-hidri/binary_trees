#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *lnode, *node = parent;

	if (parent == NULL)
		return (NULL);
	lnode = malloc(sizeof(binary_tree_t));
	if (lnode == NULL)
		return (NULL);
	lnode->parent = parent;
	lnode->right = NULL;
	lnode->n = value;
	lnode->left = NULL;
	if (node->left != NULL)
	{
		node->left->parent = lnode;
		lnode->left = node->left;
	}
	node->left = lnode;
	return (lnode);
}
