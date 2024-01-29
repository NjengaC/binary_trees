#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree nodeinary_tree_node
 * @parent: pointer to the parent node to create
 * @value: value in the node
 *
 * Return: a pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->left = NULL;
	new->right = NULL;
	new->parent = parent;

	return (new);
}
