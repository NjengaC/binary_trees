#include "binary_trees.h"
/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: the tree
 * Return: balance factor or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int lefth, righth;

	if (tree == NULL)
	{
		return (0);
	}
	lefth = l_height(tree);
	righth = r_height(tree);
/*	printf("L-%dR-%d\n", lefth, righth);*/
	return (lefth - righth);
}


/**
 * l_height - measures the left side of a tree
 * @tree: the tree
 * Return: Height or NULL
 */
size_t l_height(const binary_tree_t *tree)
{
	size_t lefth;

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
size_t r_height(const binary_tree_t *tree)
{
	size_t r;

	if (tree == NULL)
		return (0);

	r = tree->right ? 1 + r_height(tree->right) : 0;
	return (r);
}
