#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: pointer to the parent node
 * @value: value to put in the new node
 *
 * Return: new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (parent->left)
	{
		new_node->left = parent->left;
		/*rewiring the old left child as new_node's left child*/
		new_node->left->parent = new_node;
		/*rewiring new_node as his left child new parent*/
	}
	parent->left = new_node;
	/*rewiring new_node as parent's new left child*/

	return (new_node);
}
