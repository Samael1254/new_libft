#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	ft_list_last(*begin_list1)->next = begin_list2;
}
