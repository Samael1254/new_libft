/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_putnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:20 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/18 18:14:52 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../strings/ft_strings.h"
#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	len;

	if (nb == INT_MIN)
		return (ft_putstr("-2147483648"));
	len = 0;
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	if (nb > 9)
		len += ft_putnbr(nb / 10);
	len += ft_putchar(nb % 10 + 48);
	return (len);
}

int	ft_putui_base(unsigned int nb, char *base)
{
	unsigned int	base_len;
	int				len;

	base_len = ft_strlen(base);
	len = 0;
	if (nb > base_len - 1)
		len += ft_putui_base(nb / base_len, base);
	len += ft_putchar(base[nb % base_len]);
	return (len);
}

int	ft_putul_base(unsigned long nb, char *base)
{
	unsigned int	base_len;
	int				len;

	base_len = ft_strlen(base);
	len = 0;
	if (nb > base_len - 1)
		len += ft_putul_base(nb / base_len, base);
	len += ft_putchar(base[nb % base_len]);
	return (len);
}
