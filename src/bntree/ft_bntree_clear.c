#include "ft_binary_tree.h"

void	ft_bntree_clear(t_bntree *root, void (*free_fct)(void *))
{
	if (!root)
		return ;
	if (root->left)
		ft_bntree_clear(root->left, free_fct);
	if (root->right)
		ft_bntree_clear(root->right, free_fct);
	ft_bntree_delete_node(root, free_fct);
	return ;
}
