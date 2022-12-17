#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to node to check
 * Return: pointer to sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || node->parent == NULL)
		return (NULL);
	if (node->parent->left != node)
		return (node->parent->left);

	return (node->parent->right);
}
