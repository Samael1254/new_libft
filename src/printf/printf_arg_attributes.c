/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_arg_attributes.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:02 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/21 21:54:12 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chars.h"
#include "ft_math.h"
#include "ft_printf.h"
#include "ft_strings.h"
#include <stdlib.h>

int	get_strlen(t_value val, t_arg_params params)
{
	if (val.p == NULL)
	{
		if (params.precision == -1)
			return (ft_strlen("(null)"));
		else if (params.precision < (int)ft_strlen("(null)"))
			return (0);
		return (ft_min(ft_strlen("(null)"), params.precision));
	}
	if (params.precision == -1)
		return (ft_strlen((char *)val.p));
	return (ft_min(ft_strlen((char *)val.p), params.precision));
}

int	get_ptrlen(t_value val)
{
	if (val.p == NULL)
		return (ft_strlen("(nil)"));
	return (2 + usigned_nbrlen_base((unsigned long)val.p, 16));
}

int	get_doublelen(const char conv, t_value val, int precision)
{
	(void)conv;
	if (precision == -1)
		precision = 6;
	return (signed_nbrlen_base(ft_truncate(val.f), 10) + (precision > 0)
		* (precision + 1));
}

int	get_arglen(const char conv, t_value val, t_arg_params params)
{
	if (ft_isincharset(conv, "diuxX") && params.precision == 0 && val.i == 0)
		return (params.flags[PLUS_FLAG]);
	if (conv == 'c')
		return (1);
	else if (conv == 's')
		return (get_strlen(val, params));
	else if (conv == 'p')
		return (get_ptrlen(val));
	else if (conv == 'd' || conv == 'i')
		return (ft_max(signed_nbrlen_base(val.i, 10), params.precision
				+ (val.i < 0)) + (val.i >= 0) * (params.flags[PLUS_FLAG]
				|| params.flags[SPACE_FLAG]));
	else if (conv == 'u')
		return (ft_max(usigned_nbrlen_base(val.u, 10), params.precision));
	else if (conv == 'x' || conv == 'X')
		return (ft_max(usigned_nbrlen_base(val.u, 16), params.precision) + 2
			* params.flags[ALT_FLAG] * (val.u > 0));
	else if (conv == 'f')
		return (get_doublelen(conv, val, params.precision));
	else if (conv == '%')
		return (1);
	return (0);
}

t_value	get_argval(const char conv, va_list arg)
{
	t_value	val;

	if (conv == 'c' || conv == 'd' || conv == 'i')
		val.i = va_arg(arg, int);
	else if (conv == 's' || conv == 'p')
		val.p = va_arg(arg, void *);
	else if (conv == 'u' || conv == 'x' || conv == 'X')
		val.u = va_arg(arg, unsigned int);
	else if (conv == 'f')
		val.f = va_arg(arg, double);
	else
		val.p = NULL;
	return (val);
}
