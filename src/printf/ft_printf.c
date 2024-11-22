/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 12:10:09 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 17:56:53 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	return (ft_vdprintf(1, format, args));
	va_end(args);
}
