#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a tree
 * @tree: the tree
 * Return: Height or NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth = 0, righth = 0;
	const binary_tree_t *tree1;
	const binary_tree_t *tree2;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	tree1 = tree2 = tree;
	while (tree1 != NULL)
	{
		if (tree1->left != NULL)
			lefth++;
		tree1 = tree1->left;
	}

	while (tree2 != NULL)
	{
		if (tree2->right != NULL)
			righth++;
		tree2 = tree2->right;
	}
	return (lefth > righth ? lefth : righth);
}
