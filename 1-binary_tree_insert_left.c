#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node
 * as the left-child of another node
 * @parent: pointer to the node to insert the left-child in
 * @value: is the value to put in the new node
 * Return: Reurn a node binary_tree_t type
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = binary_tree_node(parent, value);

	if (left_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		parent->left->parent = left_node;
		left_node->left = parent->left;
	}

	parent->left = left_node;

	return (left_node);
}
