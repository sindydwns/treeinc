#include "tree.h"

void	free_tree(t_tree *node)
{
	free_tree(node->left);
	free_tree(node->right);
	free_tree_node(node);
}
