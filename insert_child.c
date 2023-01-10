#include "tree.h"

t_tree	*insert_child(t_tree *tree, t_tree *child, int rl)
{
	t_tree	*old;

	if (rl == LEFT)
	{
		old = tree->left;
		tree->left = child;
		return (old);
	}
	old = tree->right;
	tree->right = child;
	return (old);
}
