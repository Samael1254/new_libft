/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_params.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 17:29:14 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 11:43:24 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chars.h"
#include "ft_conversion.h"
#include "ft_memory.h"
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

int	*get_flags(const char **format)
{
	const char	all_flags[5] = "#0- +";
	int			*flags;

	flags = ft_calloc(5, sizeof(int));
	while (ft_isincharset(**format, all_flags))
	{
		flags[ft_get_char_index(**format, all_flags)] = 1;
		(*format)++;
	}
	if (flags[MINUS_FLAG])
		flags[ZERO_FLAG] = 0;
	if (flags[PLUS_FLAG])
		flags[SPACE_FLAG] = 0;
	return (flags);
}
