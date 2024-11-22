/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dprintf_printarg.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:31 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 11:58:04 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chars.h"
#include "ft_dprintf.h"
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	printconv(const char conv, t_value val, int fd)
{
	if (conv == '%')
		return (ft_putchar_fd('%', fd));
	else if (conv == 'c')
		return (ft_putchar_fd((unsigned char)val.i, fd));
	else if (conv == 's')
		return (ft_putstr_fd((char *)val.p, fd));
	else if (conv == 'p')
		return (ft_putaddr_fd(val.p, fd));
	else if (conv == 'd' || conv == 'i')
		return (ft_putnbr_fd(val.i, fd));
	else if (conv == 'u')
		return (ft_putull_base_fd(val.u, "0123456789", fd));
	else if (conv == 'x')
		return (ft_putull_base_fd(val.u, "0123456789abcdef", fd));
	else if (conv == 'X')
		return (ft_putull_base_fd(val.u, "0123456789ABCDEF", fd));
	else if (conv == 'f')
		return (ft_putdouble_fd(val.f, 6, fd));
	return (0);
}

int	printconv_prec(const char conv, t_value val, int precision, int fd)
{
	if (ft_isincharset(conv, "diuxX") && precision == 0 && val.i == 0)
		return (0);
	if (conv == 's')
	{
		if (val.p == NULL && precision < 6)
			return (0);
		return (ft_putstrn_fd((char *)val.p, precision, fd));
	}
	else if (conv == 'd' || conv == 'i')
		return (ft_putnbr_n_fd(val.i, precision, fd));
	else if (conv == 'u')
		return (ft_putull_base_n_fd(val.u, "0123456789", precision, fd));
	else if (conv == 'x')
		return (ft_putull_base_n_fd(val.u, "0123456789abcdef", precision, fd));
	else if (conv == 'X')
		return (ft_putull_base_n_fd(val.u, "0123456789ABCDEF", precision, fd));
	else if (conv == 'f')
		return (ft_putdouble_fd(val.f, precision, fd));
	return (0);
}

int	print_nb_sign(const char conv, t_value *val, t_arg_params params)
{
	if ((ft_isincharset(conv, "di") && val->i != LLONG_MIN)
		|| (ft_isincharset(conv, "f") && val->f != 2.2250738585072014e-308))
	{
		if ((ft_isincharset(conv, "di") && val->i < 0) || (ft_isincharset(conv,
					"f") && val->f < 0))
		{
			if (ft_isincharset(conv, "di"))
				val->i *= -1;
			if (ft_isincharset(conv, "f"))
				val->f *= -1;
			return (ft_putchar_fd('-', params.fd));
		}
		else if (params.flags[PLUS_FLAG])
			return (ft_putchar_fd('+', params.fd));
		else if (params.flags[SPACE_FLAG])
			return (ft_putchar_fd(' ', params.fd));
	}
	else if ((conv == 'x' || conv == 'X') && params.flags[ALT_FLAG]
		&& val->u > 0)
		return (ft_putchar_fd('0', params.fd) + ft_putchar_fd(conv, params.fd));
	return (0);
}

int	printarg(const char conv, va_list arg, t_arg_params params)
{
	t_value	val;
	int		arglen;
	int		len;

	val = get_argval(conv, arg, params.len_mod);
	arglen = get_arglen(conv, val, params);
	len = 0;
	if (params.flags[ZERO_FLAG] && conv != '%')
		len += printf_flag_zero(conv, &val, params, arglen);
	else if (!params.flags[MINUS_FLAG] && conv != '%')
	{
		len += printpadding(params, arglen, ' ');
		len += print_nb_sign(conv, &val, params);
	}
	if (params.flags[MINUS_FLAG] && conv != '%')
		len += print_nb_sign(conv, &val, params);
	if (params.precision > -1 && ft_isincharset(conv, "sdiuxXf"))
		len += printconv_prec(conv, val, params.precision, params.fd);
	else
		len += printconv(conv, val, params.fd);
	if (params.flags[MINUS_FLAG] && conv != '%')
		len += printpadding(params, arglen, ' ');
	return (len);
}
