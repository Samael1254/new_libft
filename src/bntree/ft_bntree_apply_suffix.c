#include "ft_binary_tree.h"

void	ft_bntree_apply_suffix(t_bntree *root, void (*applyf)(void *))
{
	if (root->left)
		ft_bntree_apply_suffix(root->left, applyf);
	if (root->right)
		ft_bntree_apply_suffix(root->right, applyf);
	applyf(root->data);
}
