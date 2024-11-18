#include "ft_list.h"

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temp;

	while (begin_list)
	{
		temp = begin_list->next;
		ft_delete_elem(begin_list, free_fct);
		begin_list = temp;
	}
}
