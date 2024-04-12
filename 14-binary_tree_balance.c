#include "binary_trees.h"

/**
 * binary_tree_balance - function that measures the balance
 * factor of a binary tree
 * @tree:  pointer to the root node of the tree to measure the balance factor
 * Return: an int or 0 if tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int balance = 0;

	if (tree != NULL)
	{
		balance = binary_tree_height(tree->left) - binary_tree_height(tree->right);
	}

	return (balance);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: a size_t or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0, right = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		left = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		right = 1 + binary_tree_height(tree->right);

	if (left > right)
		return (left);

	return (right);
}
