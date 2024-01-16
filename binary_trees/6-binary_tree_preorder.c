#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through a binary tree using pre-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 *
 * Return: nothing always
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	/* pass value in the node to the function */
	func(tree->n);

	/* traverse the left subtree */
	binary_tree_preorder(tree->left, func);

	/* traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
