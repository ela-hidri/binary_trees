#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rnode, *node = parent;

	if (parent == NULL)
		return (NULL);
	rnode = malloc(sizeof(binary_tree_t));
	if (rnode == NULL)
		return (NULL);
	rnode->parent = parent;
	rnode->right = NULL;
	rnode->n = value;
	rnode->left = NULL;
	if (node->right != NULL)
	{
		node->right->parent = rnode;
		rnode->right = node->right;
	}
	node->right = rnode;
	return (rnode);
}
