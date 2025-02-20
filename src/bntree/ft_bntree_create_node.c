#include "ft_binary_tree.h"
#include "ft_memory.h"

t_bntree	*ft_bntree_create_node(void *data)
{
	t_bntree	*new_node;

	new_node = ft_calloc(1, sizeof(t_bntree));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	return (new_node);
}
