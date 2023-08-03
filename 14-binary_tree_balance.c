#include <stddef.h>
#include <stdio.h>
#include "binary_trees.h"

size_t log_base_two(size_t height);
size_t count(const binary_tree_t *tree, size_t height);

/**
 * binary_tree_balance - find balance factor of a tree
 *
 * @tree: root of node
 *
 * Return: balance factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0;
	int right = 0;

	if (!tree)
		return (0);
	if (tree->left)
		left++;
	if (tree->right)
		right++;

	left += binary_tree_height(tree->left);
	right += binary_tree_height(tree->right);

	return (left - right);
}

/**
 * binary_tree_height - get the height of a binary tree
 *
 * @tree: pointer to the root of the tree
 *
 * Return: size_t, height of the tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;
	size_t true_height;

	if (!tree)
		return (0);
	height = count(tree, 0);
	true_height = log_base_two(height);

	return (true_height);
}

/**
 * count - count the approximate number of nodes from a given node
 *
 * @tree: pointer to the root of the binary tree
 * @height: number of nodes
 *
 * Return: size_t, number of nodes
 */

size_t count(const binary_tree_t *tree, size_t height)
{
	if (!tree)
		return (height);
	height = count(tree->left, height + 1);
	height = count(tree->right, height + 1);
	return (height);
}

/**
 * log_base_two - find the height given the approx node count
 *
 * @height: approximate number of nodes in the tree
 *
 * Return: size_t, height of the tree
 */
size_t log_base_two(size_t height)
{
	size_t true_height = 0;

	while (height >= 1)
	{
		height = height / 2;
		true_height += 1;
	}
	return (true_height - 2);
}
