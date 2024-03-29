#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: pointer to the new node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *tmp;

	if (!parent)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (!new_node)
		return (NULL);

	/* If parent has a left child, new node becomes the left child */
	if (parent->left)
	{
		tmp = parent->left;
		parent->left = new_node;
		new_node->left = tmp;
		tmp->parent = new_node;
	}
	else
		parent->left = new_node;

	return (new_node);
}
