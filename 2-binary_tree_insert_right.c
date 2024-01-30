#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of aonther node
 * @parent: pointer to the node to inser the rigth-child in
 * @value: value to store in the new node
 * Return: a pointer to new node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	/*new->parent = parent;*/

	if (parent->right == NULL)
		parent->right = new;
	
	else
	{
		temp = parent->right;
		parent->right = new;
		binary_tree_insert_right(new, temp->n);
		new->right->parent = new;
		free(temp);
	}
	return (parent->right);
}
