#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree
 * Return: balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lefth = 0, righth = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
	{
		return (0);
	}
	lefth = l_height(tree);
	righth = r_height(tree);
	printf("R is %d, L is %d\n", righth, lefth);
	return (lefth - righth);
}


/**
 * l_height - measures the left side of a tree
 * @tree: the tree
 * Return: Height or NULL
 */
int l_height(const binary_tree_t *tree)
{
	int lefth = 0;

	if (tree == NULL)
		return (0);

	lefth = tree->left ? 1 + l_height(tree->left) : 0;
	return (lefth);
}
/**
 * r_height - measures the left side of a tree
 * @tree: the tree
 * Return: Height or NULL
 */
int r_height(const binary_tree_t *tree)
{
	int r = 0;

	if (tree == NULL)
		return (0);

	r = tree->right ? 1 + r_height(tree->right) : 0;
	return (r);
}
