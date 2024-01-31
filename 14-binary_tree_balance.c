#include <stddef.h>
#include "binary_trees.h"
size_t binary_tree_height(const binary_tree_t *tree);
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: Balance factor of the tree, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	if (tree->left != NULL)
		left_height = binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_height = binary_tree_height(tree->right);
	 /*printf("Left Height is %d\n", left_height);*/
	 /*printf("Right Height is %d\n", right_height);*/
	return (left_height - right_height);
}

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height.
 *
 * Return: Height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height, tree_height;

	/* Base case: if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* Recursive case: calculate the height of the left subtree */
	if (tree != NULL)
		left_height = 1 + binary_tree_height(tree->left);
	else
		left_height = 0;

	/* Recursive case: calculate the height of the right subtree */
	if (tree != NULL)
		right_height = 1 + binary_tree_height(tree->right);
	else
		right_height = 0;

	/* Determine the maximum height between left and right subtrees */
	if (left_height > right_height)
		tree_height = left_height;
	else
		tree_height = right_height;

	return (tree_height);
}
