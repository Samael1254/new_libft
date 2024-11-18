#include "putdata.h"

static int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putint_base(int nbr, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nbr == -2147483648)
	{
		ft_putchar('-');
		ft_putint_base((int)(((long)(2147483648)) / base_len), base);
		ft_putint_base((int)(((long)(2147483648)) % base_len), base);
		return ;
	}
	if (nbr < 0)
	{
		ft_putchar('-');
		nbr *= -1;
	}
	if (nbr > base_len - 1)
		ft_putint_base(nbr / base_len, base);
	ft_putchar(base[nbr % base_len]);
}

void	ft_putui_base(unsigned int nb, char *base)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (nb > 15)
		ft_putui_base(nb / base_len, base);
	ft_putchar(base[nb % base_len]);
}

void	ft_putul_base(unsigned long nb, char *base)
{
	unsigned int	base_len;

	base_len = ft_strlen(base);
	if (nb > base_len - 1)
		ft_putul_base(nb / base_len, base);
	ft_putchar(base[nb % base_len]);
}

void	ft_putui_base_n(unsigned int nb, char *base, int n)
{
	int	base_len;

	base_len = ft_strlen(base);
	if (n > 1 || nb > (unsigned int)base_len)
		ft_putui_base_n(nb / base_len, base, n - 1);
	ft_putchar(base[nb % base_len]);
}
