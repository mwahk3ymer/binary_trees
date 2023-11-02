#include "binary_trees.h"

/**
 * binary_tree_leaves - Count leaves in a binary tree
 * @tree: Pointer to  ctual root node of the tree
 * Return: Num of leaf nodes in the tree, or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
