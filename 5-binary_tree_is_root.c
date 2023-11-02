#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if node is root
 * @node: Pointer to the exact node to check
 * Return: 1 if node is a root, 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	return (node->parent == NULL ? 1 : 0);
}
