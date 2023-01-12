#include "tree.h"

static void	preorder(t_tree *tree, void (*f)(void *))
{
	if (tree == NULL)
		return ;
	f(tree->value);
	preorder(tree->left, f);
	preorder(tree->right, f);
}

static void	inorder(t_tree *tree, void (*f)(void *))
{
	if (tree == NULL)
		return ;
	inorder(tree->left, f);
	f(tree->value);
	inorder(tree->right, f);
}

static void	postorder(t_tree *tree, void (*f)(void *))
{
	if (tree == NULL)
		return ;
	postorder(tree->left, f);
	postorder(tree->right, f);
	f(tree->value);
}

void	iterate_tree(t_tree *tree, void (*f)(void *), int order)
{
	if (order == PREORDER)
		preorder(tree, f);
	else if (order == INORDER)
		inorder(tree, f);
	else if (order == POSTORDER)
		postorder(tree, f);
}
