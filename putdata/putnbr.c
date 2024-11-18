#include "putdata.h"
#include <unistd.h>

void	ft_putint(int nb)
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

void	ft_putlong(long nb)
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
		ft_putint(nb % 10 + 48);
	}
}

void	ft_putuint(unsigned int nb)
{
	if (nb > 9)
		ft_putuint(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	ft_putulong(unsigned long nb)
{
	if (nb > 15)
		ft_putulong(nb / 10);
	ft_putchar(nb % 10 + 48);
}

void	ft_putint_n(int nb, int n)
{
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (n > 1 || nb > 10)
		ft_putint_n(nb / 10, n - 1);
	ft_putchar(nb % 10 + 48);
}
