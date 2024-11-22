/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:07 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 17:58:03 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"
#include <stdarg.h>

int	ft_dprintf(int fd, const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	return (ft_vdprintf(fd, format, args));
	va_end(args);
}
