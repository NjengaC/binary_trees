#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left -child of anoter node
 * @parent: pointer to the node to insert the left-child in
 * @value: value of the node
 * Return: NULL or pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->left)
		tmp = parent->left;

	parent->left = binary_tree_node(parent, value);

	if (!(parent->left))
		return (NULL);

	if (tmp)
	{
		parent->left->left = tmp;
		tmp->parent = parent->left;
	}

	return (parent->left);
}
