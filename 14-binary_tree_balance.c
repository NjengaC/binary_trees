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
	lefth = s_height(tree->left);
	righth = s_height(tree->right);
	return (lefth - righth);
}


/**
 * s_height - measures the height of a tree
 * @tree: the tree
 * Return: Height or NULL
 */
int s_height(const binary_tree_t *tree)
{
	int lefth = 0, righth = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	lefth = tree->left ? 1 + s_height(tree->left) : 0;
	righth = tree->right ? 1 + s_height(tree->right) : 0;
	return (lefth > righth ? lefth : righth);
}
