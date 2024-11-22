/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dprintf_modify_len.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 23:00:04 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 11:43:19 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_utils.h"

void	modify_signed_int_len(t_value *val, t_len_mod len_mod)
{
	if (len_mod == none)
		val->i = (int)val->i;
	else if (len_mod == hh)
		val->i = (char)val->i;
	else if (len_mod == h)
		val->i = (short)val->i;
	else if (len_mod == l)
		val->i = (long)val->i;
	else if (len_mod == ll)
		val->i = (long long)val->i;
}

void	modify_unsigned_int_len(t_value *val, t_len_mod len_mod)
{
	if (len_mod == none)
		val->u = (unsigned int)val->u;
	else if (len_mod == hh)
		val->u = (unsigned char)val->u;
	else if (len_mod == h)
		val->u = (unsigned short)val->u;
	else if (len_mod == l)
		val->u = (unsigned long)val->u;
	else if (len_mod == ll)
		val->u = (unsigned long long)val->u;
}

void	modify_len(const char conv, t_value *val, t_len_mod len_mod)
{
	if (conv == 'd' || conv == 'i')
		modify_signed_int_len(val, len_mod);
	else if (conv == 'u' || conv == 'x' || conv == 'X')
		modify_unsigned_int_len(val, len_mod);
}
