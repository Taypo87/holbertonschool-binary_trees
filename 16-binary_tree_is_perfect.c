#include "binary_trees.h"

/**
 * measure - measures total size of binary tree
 * @tree: pointer to the root node of a tree
 * Return: size of the binary tree or 0 if tree is NULL
 */

int measure(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (measure(tree->left) + measure(tree->right) + 1);
}


/**
 * binary_tree_is_perfect - checks if a given tree is full and balanced
 * @tree: pointer to the root node of a tree
 * Return: the number of nodes with atleast one child
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left && tree->right)
	{
		left = measure(tree->left);
		right = measure(tree->right);
	}
	if (left == right)
		return (1);

	return (0);
}
