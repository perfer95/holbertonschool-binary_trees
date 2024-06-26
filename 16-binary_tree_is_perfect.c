#include "binary_trees.h"

/**
 * binary_tree_is_perfect - function that checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: a int or 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int perf = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		perf = aux_perfect(tree);

		if (perf != 0)
			return (1);

		return (0);
	}
}

/**
 * aux_perfect - auxiliar function for is_perfect
 * @tree: pointer to the root node of the tree to check
 * Return: a int
 */
int aux_perfect(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if ((tree->left != NULL) && (tree->right != NULL))
	{
		left = 1 + aux_perfect(tree->left);
		right = 1 + aux_perfect(tree->right);

		if ((right == left) && (right != 0) && (left != 0))
			return (right);
		return (0);
	}
	else if ((tree->left == NULL) && (tree->right == NULL))
		return (1);
	else
		return (0);
}
