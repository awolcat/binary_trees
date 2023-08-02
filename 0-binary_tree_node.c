#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - create a binary tree node
 *
 * @parent: parent node
 * @value: data to add to node
 *
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	node = malloc(sizeof(binary_tree_t));
	if (!node)
		return (NULL);
	node->n = value;
	node->parent = parent;
	return (node);
}
