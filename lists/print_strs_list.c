#include "ft_list.h"
#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		str++;
	}
}

void	print_strs_list(t_list *begin_list)
{
	while (begin_list)
	{
		ft_putstr((char *)(begin_list->data));
		write(1, ", ", 2);
		begin_list = begin_list->next;
	}
}
