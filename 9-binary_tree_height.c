#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a given binary tree
 * @tree: pointer to the root node of the tree
 * Return: total height of tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t nodes_l = 0;
	size_t nodes_r = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	nodes_l = binary_tree_height(tree->left) + 1;
	nodes_r = binary_tree_height(tree->right) + 1;

	if (nodes_l > nodes_r)
		return (nodes_l);
	else
		return (nodes_r);
}
