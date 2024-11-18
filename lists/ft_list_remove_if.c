#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
		int (*cmp)(void *, void *), void (*free_fct)(void *))
{
	t_list	*temp;
	t_list	*iter;

	iter = *begin_list;
	while (iter)
	{
		temp = iter->next;
		if ((*cmp)(iter->data, data_ref))
			ft_delete_elem(iter, free_fct);
		iter = temp;
	}
}
