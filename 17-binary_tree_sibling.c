#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node in a binary tree
 * @node: Pointer to the node for which to find the sibling
 * Return: Pointer to the sibling node, or NULL if not found
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node && node->parent->right)
		return (node->parent->right);
	else if (node->parent->right == node && node->parent->left)
		return (node->parent->left);
	else
		return (NULL);
}
