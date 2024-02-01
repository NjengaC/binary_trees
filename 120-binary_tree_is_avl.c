#include "binary_trees.h"
/**
 * is_bst_util - Helper function to check if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree
 * @min: Minimum value allowed for nodes in the subtree
 * @max: Maximum value allowed for nodes in the subtree
 *
 * Return: 1 if the subtree rooted at 'tree' is a valid BST, 0 otherwise
 */
int is_bst_util(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);

	return (is_bst_util(tree->left, min, tree->n) &&
			is_bst_util(tree->right, tree->n, max));
}

/**
 * binary_tree_is_bst - Check if a binary tree is a valid BST
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, 0 otherwise
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);


	return (is_bst_util(tree, INT_MIN, INT_MAX));
}

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
	lefth = l_height(tree->left);
	righth = l_height(tree->right);
	return (lefth - righth);
}


/**
 * l_height - measures the height of a tree
 * @tree: the tree
 * Return: Height or NULL
 */
size_t l_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = l_height(tree->left);
	right_height = l_height(tree->right);

	return (left_height > right_height ? left_height + 1 : right_height + 1);
}
/**
 * binary_tree_is_avl - checks if a binary tree is a valid AVL Tree
 * @tree: tree
 * Return: 1 or 0
 */
int binary_tree_is_avl(const binary_tree_t *tree)
{
	if (tree)
	{
	if (binary_tree_is_bst(tree) && (binary_tree_balance(tree) >= -1 &&
	    binary_tree_balance(tree) <= 1))
		return (binary_tree_is_avl(tree->left) &&
			binary_tree_is_avl(tree->right));
	return (0);
	}
	return (1);
}
