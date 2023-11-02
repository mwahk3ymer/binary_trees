#include "binary_trees.h"

/**
 * binary_tree_uncle - Find uncle of node in a binary tree
 * @node: Pointer to node for which to find the uncle
 * Return: Pointer touncle node, or NULL if not found
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	binary_tree_t *grandparent = node->parent->parent;

	if (grandparent->left && grandparent->right)
	{
		if (grandparent->left == node->parent)
			return (grandparent->right);
		else
			return (grandparent->left);
	}

	return (NULL);
}
