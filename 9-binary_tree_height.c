#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a tree
 * @tree: the tree
 * Return: Height or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth = 0, righth = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	lefth = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	righth = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (lefth > righth ? lefth : righth);
}
