#include "binary_trees.h"

/**
 * binary_tree_depth - Measur depth of node in a binary tree
 * @tree: Pointer to node to measure depth
 * Return: Depth of the node, or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->parent)
		return (1 + binary_tree_depth(tree->parent));
	else
		return (0);
}
