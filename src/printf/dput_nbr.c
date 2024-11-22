/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dput_nbr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:20 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 11:32:57 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"
#include "ft_math.h"
#include "ft_strings.h"
#include <limits.h>

int	ft_putnbr_fd(long long nb, int fd)
{
	int	len;

	if (nb == LONG_MIN)
		return (ft_putstr_fd("-9223372036854775808", fd));
	len = 0;
	if (nb < 0)
	{
		len += ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb >= 10)
		len += ft_putnbr_fd(nb / 10, fd);
	len += ft_putchar_fd(nb % 10 + 48, fd);
	return (len);
}

int	ft_putnbr_n_fd(long long nb, int n, int fd)
{
	int	len;

	if (nb == LONG_MIN)
		return (ft_putstr_fd("-2147483648", fd));
	len = 0;
	if (nb < 0)
	{
		len += ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (n > 1 || nb >= 10)
		len += ft_putnbr_n_fd(nb / 10, n - 1, fd);
	len += ft_putchar_fd(nb % 10 + 48, fd);
	return (len);
}

int	ft_putull_base_fd(unsigned long long nb, char *base, int fd)
{
	unsigned long long	base_len;
	int					len;

	base_len = ft_strlen(base);
	len = 0;
	if (nb >= base_len)
		len += ft_putull_base_fd(nb / base_len, base, fd);
	len += ft_putchar_fd(base[nb % base_len], fd);
	return (len);
}

int	ft_putull_base_n_fd(unsigned long long nb, char *base, int n, int fd)
{
	unsigned long long	base_len;
	int					len;

	base_len = ft_strlen(base);
	len = 0;
	if (n > 1 || nb >= base_len)
		len += ft_putull_base_n_fd(nb / base_len, base, n - 1, fd);
	len += ft_putchar_fd(base[nb % base_len], fd);
	return (len);
}

int	ft_putdouble_fd(double nb, int precision, int fd)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		len += ft_putchar_fd('-', fd);
		nb *= -1;
	}
	len += ft_putnbr_fd(ft_truncate(nb), fd);
	if (precision == 0)
		return (len);
	len += ft_putchar_fd('.', fd);
	while (0 < precision)
	{
		nb = (nb - ft_truncate(nb)) * 10;
		len += ft_putchar_fd(ft_truncate(nb) + 48, fd);
		precision--;
	}
	return (len);
}
