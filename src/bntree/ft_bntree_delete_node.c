#include "ft_binary_tree.h"
#include <stdlib.h>

void	ft_bntree_delete_node(t_bntree *node, void (*free_fct)(void *))
{
	if (free_fct)
		free_fct(node->data);
	free(node);
}
