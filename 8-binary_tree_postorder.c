#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary tree postorder
 *
 * @tree: tree being traversed
 * @func: function applied to node data
 *
 * Return: void
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
