/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dput_misc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:26 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 12:04:25 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dprintf.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
	return (1);
}

int	ft_putaddr_fd(void *addr, int fd)
{
	int	len;

	if (addr == NULL)
		return (ft_putstr_fd("(nil)", fd));
	len = ft_putstr_fd("0x", fd);
	len += ft_putull_base_fd((unsigned long)addr, "0123456789abcdef", fd);
	return (len);
}

int	ft_putstr_fd(char *str, int fd)
{
	int	len;

	if (!str)
		return (ft_putstr_fd("(null)", fd));
	len = 0;
	while (*str)
		len += ft_putchar_fd(*str++, fd);
	return (len);
}

int	ft_putstrn_fd(char *str, int n, int fd)
{
	int	i;

	if (!str)
		return (ft_putstr_fd("(null)", fd));
	i = 0;
	while (str[i] && i < n)
	{
		ft_putchar_fd(str[i], fd);
		i++;
	}
	return (i);
}
