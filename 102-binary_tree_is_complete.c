#include "binary_trees.h"
#include <stdio.h>

/**
 * binary_tree_is_complete - Check if a binary tree is complete
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is complete, 0 otherwise
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	int is_last_level = 0;
	const binary_tree_t *current;
	const binary_tree_t **queue = NULL;
	int front = 0, rear = 0;
	int size = 1024;

	queue = malloc(sizeof(binary_tree_t *) * size);
	if (queue == NULL)
		return (0);

	queue[rear++] = tree;

	while (front < rear)
	{
		current = queue[front++];

		if (current == NULL)
		{
			is_last_level = 1;
			continue;
		}

		if (is_last_level)
			return (0);

		queue[rear++] = current->left;
		queue[rear++] = current->right;
	}

	free(queue);

	return (1);
}
