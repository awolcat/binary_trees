#include <stddef.h>
#include "binary_trees.h"

/**
 * find_size - find the number of nodes in a tree
 *
 * @node: the root of the tree/subtree
 * @count: number of nodes initialized to 0
 *
 * Return: size_t, count
 */

size_t find_size(const binary_tree_t *node, size_t count)
{
	if (!node)
		return (0);
	count = find_size(node->left, count);
	count += find_size(node->right, count);
	return (count + 1);
}

/**
 * binary_tree_size - wrapper for find_size
 *
 * @tree: the root of the tree/subtree
 *
 * Return: size_t, size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (!tree)
		return (0);
	size = find_size(tree, size);
	return (size);
}
