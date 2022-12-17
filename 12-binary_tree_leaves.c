#include "binary_trees.h"

/**
 * binary_tree_leaves - counts how many leaves a given tree has
 * @tree: pointer to the root node of a binary tree
 * Return: umber of leaves in a binary tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_leaves(tree->left) +
			binary_tree_leaves(tree->right));
}
