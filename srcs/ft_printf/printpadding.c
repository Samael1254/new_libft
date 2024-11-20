/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printpadding.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 13:20:57 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/18 18:14:23 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	printpadding(int width, int arglen, char c)
{
	int	len;

	len = 0;
	while (width > arglen)
	{
		len += ft_putchar(c);
		width--;
	}
	return (len);
}

int	printf_flag_zero(const char conv, t_value *val, t_arg_params params,
		int arglen)
{
	int	len;

	len = 0;
	if (isincharset(conv, "diuxX"))
	{
		len += print_nb_sign(conv, val, params);
		len += printpadding(params.width, arglen, '0');
	}
	return (len);
}
