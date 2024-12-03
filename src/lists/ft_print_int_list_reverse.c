#include "ft_list.h"
#include "ft_printf.h"

void	print_int_list_reverse(t_list *begin_list, char sep)
{
	if (!begin_list)
		return ;
	print_int_list_reverse(begin_list->next, sep);
	ft_printf("%d%c", *(int *)begin_list->data, sep);
}
