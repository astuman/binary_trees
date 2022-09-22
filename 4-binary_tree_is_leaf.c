#include "binary_trees.h"
/**
 * binary_tree_is_leaf - to know binary tree is leaf
 * @node: node
 * @Return: return 1 if node is leaf or return 0 if node is not leaf
 **/

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->left == NULL && node->right == NULL)
	{
		return (1);
	}
	return (0);
}
