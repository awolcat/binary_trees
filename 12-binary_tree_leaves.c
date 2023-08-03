#include <stddef.h>
#include "binary_trees.h"

/**
 * traverse_tree - return each node of a tree
 *
 * @tree: root of the tree/subtree
 * @leaves: number of nodes with no children
 *
 * Return: size_t, number of leaves
 */
size_t traverse_tree(const binary_tree_t *tree, size_t leaves)
{
	size_t flag = 0;

	if (!tree)
		return (0);
	flag = traverse_tree(tree->left, leaves);
	leaves += flag;
	flag = traverse_tree(tree->right, leaves);
	leaves += flag;
	if (!tree->left && !tree->right)
		return (1);
	return (leaves);
}

/**
 * binary_tree_leaves - wrapper for traverse_tree
 *
 * @tree: root of the tree/subtree
 *
 * Return: size_t, number of nodes
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (!tree)
		return (0);
	leaves = traverse_tree(tree, leaves);
	if (!tree->parent)
		leaves -= 1;
	return (leaves);
}
