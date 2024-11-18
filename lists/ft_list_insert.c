#include "ft_list.h"

void	ft_list_insert(t_list **begin_list, void *data, unsigned int index)
{
	t_list	*temp;

	if (index == 0)
		ft_list_push_front(begin_list, data);
	else if (ft_list_size(*begin_list) < index)
		ft_list_push_back(begin_list, data);
	else
	{
		temp = ft_list_at(*begin_list, index);
		ft_list_at(*begin_list, index - 1)->next = ft_create_elem(data);
		ft_list_at(*begin_list, index)->next = temp;
	}
}
