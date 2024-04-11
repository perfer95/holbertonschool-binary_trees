#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at
 * least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: a size_t or 0 if tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree != NULL)
	{
		if ((tree->left != NULL) || (tree->right != NULL))
			nodes = nodes + 1;
		nodes = nodes + binary_tree_leaves(tree->left);
		nodes = nodes + binary_tree_leaves(tree->right);
	}

	return (nodes);
}
