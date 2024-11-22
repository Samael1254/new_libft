/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dput_double.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 21:28:19 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 22:46:57 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "ft_printf_utils.h"
#include <float.h>

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

int	ft_putscient_fd(double nb, int precision, const char conv, int fd)
{
	int	len;
	int	exponent;

	len = 0;
	exponent = ft_get_exponent(nb);
	len += ft_putdouble_fd(nb * ft_powerf(10, -exponent), precision, fd);
	len += ft_putchar_fd(conv, fd);
	if (exponent >= 0)
		len += ft_putchar_fd('+', fd);
	len += ft_putnbr_n_fd(exponent, 2, fd);
	return (len);
}
