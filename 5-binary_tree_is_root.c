#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if a node is a root
 * @node: the node
 * Return: 1 if yes and 0 if no
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
