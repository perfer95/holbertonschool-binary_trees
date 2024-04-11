#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node in
 * a binary tree
 * @tree: pointer to the root node of the tree to measure the depth.
 * Return: a size_t or 0 if tree is NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t i = 0;

	if (tree == NULL)
		return (0);

	if (tree->parent != NULL)
		i = 1 + binary_tree_depth(tree->parent);

	return (i);
}
