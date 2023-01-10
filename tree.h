#ifndef TREE_H
# define TREE_H

# include <stdlib.h>
# include <stdio.h>

# define LEFT 0
# define RIGHT 1
# define PREORDER 0
# define INORDER 1
# define POSTORDER 2

typedef struct s_tree
{
	void			*value;
	struct s_tree	*left;
	struct s_tree	*right;
}	t_tree;

t_tree	*new_tree_node(void *value);
void	free_tree_node(t_tree *node);
void	free_tree(t_tree *node);
t_tree	*insert_child(t_tree *tree, t_tree *child, int rl);
t_tree	*delete_child(t_tree *tree, int rl);
void	iterate_tree(t_tree *tree, void (*f)(void *), int order);

#endif
