#include "binary_trees.h"

/**
 * binary_tree_inorder - traverses binary tree inorder
 * @tree: tree to traverse
 * @func: pointer to function to be applie with data stored in nodes
 * Return: Recursive
 */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))

{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);

}
