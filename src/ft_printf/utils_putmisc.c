/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils_putmisc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:26 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/17 13:15:06 by gfulconi         ###   ########.fr       */
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
	len += ft_putul_base((unsigned long)addr, "0123456789abcdef");
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
