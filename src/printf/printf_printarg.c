/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_printarg.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:31 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/21 21:53:03 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chars.h"
#include "ft_printf.h"
#include <float.h>
#include <limits.h>
#include <stdlib.h>

int	printconv(const char conv, t_value val)
{
	if (conv == '%')
		return (ft_putchar('%'));
	else if (conv == 'c')
		return (ft_putchar((unsigned char)val.i));
	else if (conv == 's')
		return (ft_putstr((char *)val.p));
	else if (conv == 'p')
		return (ft_putaddr(val.p));
	else if (conv == 'd' || conv == 'i')
		return (ft_putnbr(val.i));
	else if (conv == 'u')
		return (ft_putull_base(val.u, "0123456789"));
	else if (conv == 'x')
		return (ft_putull_base(val.u, "0123456789abcdef"));
	else if (conv == 'X')
		return (ft_putull_base(val.u, "0123456789ABCDEF"));
	else if (conv == 'f')
		return (ft_putdouble(val.f, 6));
	return (0);
}

int	printconv_prec(const char conv, t_value val, int precision)
{
	if (ft_isincharset(conv, "diuxX") && precision == 0 && val.i == 0)
		return (0);
	if (conv == 's')
	{
		if (val.p == NULL && precision < 6)
			return (0);
		return (ft_putstrn((char *)val.p, precision));
	}
	else if (conv == 'd' || conv == 'i')
		return (ft_putnbr_n(val.i, precision));
	else if (conv == 'u')
		return (ft_putull_base_n(val.u, "0123456789", precision));
	else if (conv == 'x')
		return (ft_putull_base_n(val.u, "0123456789abcdef", precision));
	else if (conv == 'X')
		return (ft_putull_base_n(val.u, "0123456789ABCDEF", precision));
	else if (conv == 'f')
		return (ft_putdouble(val.f, precision));
	return (0);
}

int	print_nb_sign(const char conv, t_value *val, t_arg_params params)
{
	if ((ft_isincharset(conv, "di") && val->i != INT_MIN)
		|| (ft_isincharset(conv, "f") && val->f != DBL_MIN))
	{
		if ((ft_isincharset(conv, "di") && val->i < 0) || (ft_isincharset(conv,
					"f") && val->f < 0))
		{
			if (ft_isincharset(conv, "di"))
				val->i *= -1;
			if (ft_isincharset(conv, "f"))
				val->f *= -1;
			return (ft_putchar('-'));
		}
		else if (params.flags[PLUS_FLAG])
			return (ft_putchar('+'));
		else if (params.flags[SPACE_FLAG])
			return (ft_putchar(' '));
	}
	else if ((conv == 'x' || conv == 'X') && params.flags[ALT_FLAG]
		&& val->u > 0)
		return (ft_putchar('0') + ft_putchar(conv));
	return (0);
}

int	printarg(const char conv, va_list arg, t_arg_params params)
{
	t_value	val;
	int		arglen;
	int		len;

	val = get_argval(conv, arg);
	arglen = get_arglen(conv, val, params);
	len = 0;
	if (params.flags[ZERO_FLAG] && conv != '%')
		len += printf_flag_zero(conv, &val, params, arglen);
	else if (!params.flags[MINUS_FLAG] && conv != '%')
	{
		len += printpadding(params.width, arglen, ' ');
		len += print_nb_sign(conv, &val, params);
	}
	if (params.flags[MINUS_FLAG] && conv != '%')
		len += print_nb_sign(conv, &val, params);
	if (params.precision > -1 && ft_isincharset(conv, "sdiuxXf"))
		len += printconv_prec(conv, val, params.precision);
	else
		len += printconv(conv, val);
	if (params.flags[MINUS_FLAG] && conv != '%')
		len += printpadding(params.width, arglen, ' ');
	return (len);
}
