/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:07 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/18 18:11:45 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdlib.h>

int	ft_printf(const char *format, ...)
{
	va_list			args;
	int				len;
	t_arg_params	params;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			params.flags = get_flags(&format);
			params.width = get_width(&format, args, params.flags);
			params.precision = get_precision(&format, args, params.flags);
			len += printarg(*format, args, params);
			free(params.flags);
		}
		else
			len += ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
