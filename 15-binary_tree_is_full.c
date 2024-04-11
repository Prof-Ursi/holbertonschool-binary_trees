#include "binary_trees.h"

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * A full binary tree is a binary tree in which
 * all of the nodes have either 0 or 2 offspring.
 *
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is full, 0 otherwise.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
}
