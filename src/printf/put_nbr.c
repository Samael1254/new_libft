/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_nbr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:20 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/21 14:11:46 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "ft_printf.h"
#include "ft_strings.h"
#include <limits.h>

int	ft_putnbr(long long nb)
{
	int	len;

	if (nb == LONG_MIN)
		return (ft_putstr("-9223372036854775808"));
	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
		len += ft_putnbr(nb / 10);
	len += ft_putchar(nb % 10 + 48);
	return (len);
}

int	ft_putnbr_n(long long nb, int n)
{
	int	len;

	if (nb == LONG_MIN)
		return (ft_putstr("-2147483648"));
	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	if (n > 1 || nb >= 10)
		len += ft_putnbr_n(nb / 10, n - 1);
	len += ft_putchar(nb % 10 + 48);
	return (len);
}

int	ft_putull_base(unsigned long long nb, char *base)
{
	unsigned long long	base_len;
	int					len;

	base_len = ft_strlen(base);
	len = 0;
	if (nb >= base_len)
		len += ft_putull_base(nb / base_len, base);
	len += ft_putchar(base[nb % base_len]);
	return (len);
}

int	ft_putull_base_n(unsigned long long nb, char *base, int n)
{
	unsigned long long	base_len;
	int					len;

	base_len = ft_strlen(base);
	len = 0;
	if (n > 1 || nb >= base_len)
		len += ft_putull_base_n(nb / base_len, base, n - 1);
	len += ft_putchar(base[nb % base_len]);
	return (len);
}

int	ft_putdouble(double nb, int precision)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	len += ft_putnbr(ft_truncate(nb));
	if (precision == 0)
		return (len);
	len += ft_putchar('.');
	while (0 < precision)
	{
		nb = (nb - ft_truncate(nb)) * 10;
		len += ft_putchar(ft_truncate(nb) + 48);
		precision--;
	}
	return (len);
}
