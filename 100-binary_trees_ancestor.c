#include "binary_trees.h"

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: points to the first node
* @second: points to the second node
* Return: pointer to the lowest common ancestor
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
binary_tree_t *s1, *s2;

if (first == NULL || second == NULL)
return (NULL);

if (first == second)
return ((binary_tree_t *)(first));

s1 =  binary_trees_ancestor(first->parent, second);
s2 = binary_trees_ancestor(first, second->parent);

if (s1 != NULL && s2 != NULL)
return (s2);

return (s1 != NULL ? s1 : s2);

}
