#include "ft_binary_tree.h"

void	ft_bntree_insert(t_bntree *root, void *data, int (*cmpf)(void *,
			void *))
{
	if (!root)
		return ;
	if (cmpf(data, root->data) < 0)
	{
		if (root->left)
			ft_bntree_insert(root->left, data, cmpf);
		else
			root->left = ft_bntree_create_node(data);
	}
	else
	{
		if (root->right)
			ft_bntree_insert(root->right, data, cmpf);
		else
			root->right = ft_bntree_create_node(data);
	}
}
