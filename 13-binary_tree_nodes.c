#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - count nodes with one child or more
 *
 * @tree: root of the tree
 *
 * Return: size_t
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (1 + binary_tree_nodes(tree->left)
			+ binary_tree_nodes(tree->right));
	return (0);
}
