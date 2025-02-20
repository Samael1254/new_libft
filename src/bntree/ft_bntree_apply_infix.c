#include "ft_binary_tree.h"

void	ft_bntree_apply_infix(t_bntree *root, void (*applyf)(void *))
{
	if (root->left)
		ft_bntree_apply_infix(root->left, applyf);
	applyf(root->data);
	if (root->right)
		ft_bntree_apply_infix(root->right, applyf);
}
