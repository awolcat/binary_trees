#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Insert node at left of parent
 *
 * @parent: parent node to gain left node
 * @value: value for new node
 *
 * Return: Pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = NULL;

	if (!parent)
		return (NULL);
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);
	new_node->n = value;
	new_node->parent = parent;
	new_node->right = NULL;
	if (parent->left)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	else
		new_node->left = NULL;
	parent->left = new_node;
	return (new_node);
}
