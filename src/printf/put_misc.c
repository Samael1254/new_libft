/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_putmisc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:26 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 23:44:31 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putaddr(void *addr)
{
	int	len;

	if (addr == NULL)
		return (ft_putstr("(nil)"));
	len = ft_putstr("0x");
	len += ft_putull_base((unsigned long)addr, "0123456789abcdef");
	return (len);
}

int	ft_putstr(char *str)
{
	int	len;

	if (!str)
		return (ft_putstr("(null)"));
	len = 0;
	while (*str)
		len += ft_putchar(*str++);
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
