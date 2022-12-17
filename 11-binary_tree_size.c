#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of a binary tree
 * @tree: pointer to the root node of a binary tree
 * Return: the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t treesize = 1;

	if (!tree)
		return (0);

	treesize += binary_tree_size(tree->left);
	treesize += binary_tree_size(tree->right);

	return (treesize);
}
