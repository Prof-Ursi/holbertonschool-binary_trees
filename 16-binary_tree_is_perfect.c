#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * Height is the number of edge from the root to the furthest leaf.
 *
 * @tree: pointer to the root node of the tree to measure the height.
 *
 * Return: the height of a binary tree,
 * 0 if tree is NULL or if tree is a leaf.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_is_perfect -Checks if a binary tree is perfect.
 * A binary tree is perfect when all the nodes of its lower level
 * are leaves with no gap, and when all the other nodes have two children.
 *
 * @tree: pointer to the root node of the tree to check.
 *
 * Return: 1 if the tree is perfect, 0 otherwise.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left = NULL;
	binary_tree_t *right = NULL;

	if (!tree)
		return (0);

	left = tree->left;
	right = tree->right;

	if (!left && !right)
		return (1);

	if (binary_tree_height(left) != binary_tree_height(right))
		return (0);

	return (binary_tree_is_perfect(left) && binary_tree_is_perfect(right));
}
