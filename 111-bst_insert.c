#include "binary_trees.h"

/**
 *bst_insert - inserts a value in BST
 *@tree: the trr
 *@value: the value to store in the node to insert
 *Return: pointer to created node
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *tree_t, *new;

	if (tree)
	{
		tree_t = *tree;

		if (!tree_t)
		{
			new = binary_tree_node(NULL, value);
			if (!new)
				return (NULL);
			*tree = new;
			return (new);
		}
		if (value < tree_t->n)
		{
			if (tree_t->left)
				return (bst_insert(&(tree_t->left), value));
			new = binary_tree_node(tree_t, value);
			if (!new)
				return (NULL);
			tree_t->left = new;
			return (new);
		}
		if (value > tree_t->n)
		{
			if (tree_t->right)
				return (bst_insert(&(tree_t->right), value));
			new = binary_tree_node(tree_t, value);
			if (!new)
				return (NULL);
			tree_t->right = new;
			return (new);
		}
	}
	return (NULL);
}
