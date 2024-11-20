#include "putdata.h"
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_puterror(char *error)
{
	while (*error)
		write(2, error++, 1);
}

void	ft_putstrn(char *str, int n)
{
	int	i;

	i = 0;
	while (str[i] && i < n)
		ft_putchar(str[i++]);
}

void	ft_putaddr(void *addr)
{
	write(1, "0x", 2);
	ft_putul_base((unsigned long)addr, "0123456789abcdef");
}
