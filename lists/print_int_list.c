#include "ft_list.h"
#include <unistd.h>

static void	ft_putchar(char c)
{
	write(1, &c, 1);
}

static void	ft_putint(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			ft_putchar('-');
			nb *= -1;
		}
		if (nb > 9)
			ft_putint(nb / 10);
		ft_putchar(nb % 10 + 48);
	}
}

void	print_int_list(t_list *begin_list)
{
	while (begin_list)
	{
		ft_putint(*(int *)(begin_list->data));
		write(1, ", ", 2);
		begin_list = begin_list->next;
	}
}
