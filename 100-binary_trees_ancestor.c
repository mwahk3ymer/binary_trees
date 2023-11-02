#include "binary_trees.h"

/**
 * binary_trees_ancestor - Find the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 * Return: Pointer to the lowest common ancestor node, or NULL if not found
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (first == NULL || second == NULL)
		return (NULL);

	if (first == second)
		return ((binary_tree_t *)first);

	if (first == second->parent)
		return ((binary_tree_t *)first);

	if (first->parent == second)
		return ((binary_tree_t *)second);

	if (first->parent == second->parent)
		return ((binary_tree_t *)(first->parent));

	binary_tree_t *ancestor1 = binary_trees_ancestor(first, second->parent);
	binary_tree_t *ancestor2 = binary_trees_ancestor(first->parent, second);

	if (ancestor1 && ancestor2)
		return ((binary_tree_t *)(first->parent));

	if (ancestor1)
		return (ancestor1);

	return (ancestor2);
}
