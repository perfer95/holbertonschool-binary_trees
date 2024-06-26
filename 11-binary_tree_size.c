#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size.
 * Return: a size_t or 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree != NULL)
	{
		size = size + 1;
		size = size + binary_tree_size(tree->left);
		size = size + binary_tree_size(tree->right);
	}

	return (size);
}
