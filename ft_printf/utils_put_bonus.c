/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_put_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:02:45 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/18 18:12:16 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../strings/ft_strings.h"
#include "ft_printf.h"

int	ft_putnbr_n(int nb, int n)
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
	if (n > 1 || nb >= 10)
		len += ft_putnbr_n(nb / 10, n - 1);
	len += ft_putchar(nb % 10 + 48);
	return (len);
}

int	ft_putui_base_n(unsigned int nb, char *base, int n)
{
	unsigned int	base_len;
	int				len;

	base_len = ft_strlen(base);
	len = 0;
	if (n > 1 || nb >= base_len)
		len += ft_putui_base_n(nb / base_len, base, n - 1);
	len += ft_putchar(base[nb % base_len]);
	return (len);
}

int	ft_putstrn(char *str, int n)
{
	int	i;

	if (!str)
		return (ft_putstr("(null)"));
	i = 0;
	while (str[i] && i < n)
	{
		ft_putchar(str[i]);
		i++;
	}
	return (i);
}
