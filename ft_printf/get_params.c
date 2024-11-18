/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_params.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:14 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/18 18:13:15 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../chars/ft_chars.h"
#include "../conversion/conversion.h"
#include "../memory/memory.h"
#include "ft_printf.h"

int	get_precision(const char **format, va_list args, int *flags)
{
	int	precision;

	if (**format != '.')
		return (-1);
	(*format)++;
	if (**format == '*')
	{
		precision = va_arg(args, int);
		(*format)++;
	}
	else
	{
		precision = ft_atoi(*format);
		if (**format == '-')
			(*format)++;
		while (ft_isdigit(**format))
			(*format)++;
	}
	if (precision < 0)
		return (-1);
	flags[ZERO_FLAG] = 0;
	return (precision);
}

int	get_width(const char **format, va_list args, int *flags)
{
	int	width;

	if (**format == '*')
	{
		width = va_arg(args, int);
		if (width < 0)
		{
			flags[MINUS_FLAG] = 1;
			width *= -1;
		}
		(*format)++;
	}
	else
	{
		width = ft_atoi(*format);
		while (ft_isdigit(**format))
			(*format)++;
	}
	return (width);
}

int	get_char_index(const char c, const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	*get_flags(const char **format)
{
	const char	all_flags[5] = "#0- +";
	int			*flags;

	flags = ft_calloc(5, sizeof(int));
	while (isincharset(**format, all_flags))
	{
		flags[get_char_index(**format, all_flags)] = 1;
		(*format)++;
	}
	if (flags[MINUS_FLAG])
		flags[ZERO_FLAG] = 0;
	if (flags[PLUS_FLAG])
		flags[SPACE_FLAG] = 0;
	return (flags);
}
