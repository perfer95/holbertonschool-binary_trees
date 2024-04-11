#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: pointer to the root node of the tree to count the number of leaves.
 * Return: a size_t or 0 if tree is NULL.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree != NULL)
	{
		if ((tree->left == NULL) && (tree->right == NULL))
			leaves = leaves + 1;
		leaves = leaves + binary_tree_leaves(tree->left);
		leaves = leaves + binary_tree_leaves(tree->right);
	}

	return (leaves);
}
