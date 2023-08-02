#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_preorder - traverse binary tree in preorder
 *
 * @tree: root of the binary tree
 * @func: function that operates on node data
 *
 * Return: void
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
