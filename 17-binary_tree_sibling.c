#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: node is a pointer to the node to find the sibling
 * Return: pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left == node)
		node = node->parent->right;
	else if (node->parent->right == node)
		node = node->parent->left;
	else if (node->parent->left == NULL || node->parent->right == NULL)
		return (NULL);

	return (node);
}
