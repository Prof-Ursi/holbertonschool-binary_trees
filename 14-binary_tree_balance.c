#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree.
 * The height of a tree is the number of edge from the root
 * to the furthest leaf.
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

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree.
 * The balance factor of a tree is the difference of heigth
 * between the left and right subtree,
 * this factor being 0 when the tree is balanced, negative when the
 * right subtree has more heigth and positive when it is the left.
 *
 * @tree: pointer to the root node of the tree to measure the balance factor.
 * Return: Balance factor, or 0 If tree is NULL.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
