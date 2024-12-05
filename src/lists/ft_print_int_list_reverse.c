#include "ft_list.h"
#include "ft_printf.h"

void	ft_print_int_list_reverse(t_list *begin_list, char *sep)
{
	if (!begin_list)
		return ;
	ft_print_int_list_reverse(begin_list->next, sep);
	if (begin_list->next)
		ft_printf("%s", sep);
	ft_printf("%d", *(int *)begin_list->data);
}
