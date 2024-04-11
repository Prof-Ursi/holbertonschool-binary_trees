#include "binary_trees.h"

/**
 * binary_tree_size - Measures the size of a binary tree.
 * Here the size of the tree is the number of nodes inside the tree.
 *
 * @tree: pointer to the root node of the tree to measure the size.
 *
 * Return: the size of a binary tree, or 0 if the tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
