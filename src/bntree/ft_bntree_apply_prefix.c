#include "ft_binary_tree.h"

void	ft_bntree_apply_prefix(t_bntree *root, void (*applyf)(void *))
{
	applyf(root->data);
	if (root->left)
		ft_bntree_apply_prefix(root->left, applyf);
	if (root->right)
		ft_bntree_apply_prefix(root->right, applyf);
}
