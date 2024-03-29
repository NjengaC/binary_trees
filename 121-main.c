#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 *  * main - Entry point
 *   *
 *    * Return: 0 on success, error code on failure
 *     */
int main(void)
{
	avl_t *root;
	avl_t *node;

	root = NULL;
	node = avl_insert(&root, 98);
	printf("Inserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 402);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 12);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 46);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 128);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 256);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 512);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 50);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 228);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 428);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 528);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 628);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 728);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 828);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 928);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 28);
	printf("\nInserted: %d\n", node->n);
	binary_tree_print(root);
	node = avl_insert(&root, 8);
	return (0);
}
