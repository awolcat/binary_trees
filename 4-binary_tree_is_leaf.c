#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Check if a node is a leaf
 *
 * @node: node to check
 *
 * Return: 1 if leaf, else 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int flag = 1;

	if (!node)
		return (0);
	if (node->left || node->right)
		flag = 0;
	return (flag);
}
