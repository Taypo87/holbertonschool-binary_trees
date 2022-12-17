#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance of a binary tree
 * @tree: pointer to the root node of a tree
 * Return: the balance factor of the tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l = 0;
	int height_r = 0;

	if (tree == NULL)
		return (0);

	height_l = binary_tree_height(tree->left);
	height_l = binary_tree_height(tree->right);

	return (height_l - height_r);
}
