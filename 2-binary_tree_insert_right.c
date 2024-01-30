#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp = NULL;

	if (parent == NULL)
		return (NULL);

	if (parent->right)
		tmp = parent->right;

	parent->right = binary_tree_node(parent, value);

	if (!(parent->right))
		return (NULL);

	if (tmp)
	{
		parent->right->right = tmp;
		tmp->parent = parent->right;
	}

	return (parent->right);
}
