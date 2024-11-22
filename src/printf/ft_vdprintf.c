/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vdprintf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:07 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 17:54:44 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"
#include <stdlib.h>

int	ft_vdprintf(int fd, const char *format, va_list args)
{
	int				len;
	t_arg_params	params;

	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			params.flags = get_flags(&format);
			params.width = get_width(&format, args, params.flags);
			params.precision = get_precision(&format, args, params.flags);
			params.len_mod = get_len_mod(&format);
			params.fd = fd;
			len += printarg(*format, args, params);
			free(params.flags);
		}
		else
			len += ft_putchar_fd(*format, fd);
		format++;
	}
	va_end(args);
	return (len);
}
