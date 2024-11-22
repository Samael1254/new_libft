/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dprintf_padding.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:20:57 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 11:56:10 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chars.h"
#include "ft_dprintf.h"

int	printpadding(t_arg_params params, int arglen, char c)
{
	int	len;

	len = 0;
	while (params.width > arglen)
	{
		len += ft_putchar_fd(c, params.fd);
		params.width--;
	}
	return (len);
}

int	printf_flag_zero(const char conv, t_value *val, t_arg_params params,
		int arglen)
{
	int	len;

	len = 0;
	if (ft_isincharset(conv, "diuxXf"))
	{
		len += print_nb_sign(conv, val, params);
		len += printpadding(params, arglen, '0');
	}
	return (len);
}
