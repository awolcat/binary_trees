#include <stddef.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - find the depth of a given node
 *
 * @tree: the node to investigate
 *
 * Return: size_t, depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	const binary_tree_t *temp = NULL;

	temp = tree;
	if (!tree)
		return (0);
	for ( ; temp; temp = temp->parent)
		depth++;
	return (depth - 1);
}
