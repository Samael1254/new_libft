#include "ft_list.h"

t_list	*ft_list_clone(t_list *begin_list)
{
	t_list	*new_list;

	while (begin_list)
	{
		ft_list_push_back(&new_list, begin_list->data);
		begin_list = begin_list->next;
	}
	return (new_list);
}
