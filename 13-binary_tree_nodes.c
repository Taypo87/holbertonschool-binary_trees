#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the number of nodes in a given binary tree
 * @tree: poointer to the root node of a binary tree
 * Return: number of nodes counted
 */

size_t binary_tree_nodes(const binary_tree_t *tree)

{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left || tree->right)
		count = 1;
	count += binary_tree_nodes(tree->left) +
		binary_tree_nodes(tree->right);
	return (count);
}
