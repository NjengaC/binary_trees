#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left -child of anoter node
 * @parent: pointer to the node to insert the left-child in
 * @value: value of the node
 * Return: NULL or pointer to created node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	binary_tree_t *temp;

	if (parent == NULL)
		return (NULL);
	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	if (parent->left == NULL)
	{
		parent->left = new;
	}
	else
	{
		temp = parent->left;
		parent->left = new;
		binary_tree_insert_left(parent->left, temp->n);
		temp->parent = parent->left;
	}
	return (new);
}
