/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:08:16 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/12 14:13:42 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include "ft_math.h"
#include "ft_printf.h"

void	ft_print_vector4D(t_vector4D v, int precision)
{
	int	max_len;

	max_len = ft_max(ft_max(ft_doublelen(v.x, precision), ft_doublelen(v.y,
					precision)), ft_max(ft_doublelen(v.z, precision),
				ft_doublelen(v.w, precision)));
	ft_printf("    ⌜%*.*f⌝\n", max_len, precision, v.x);
	ft_printf("v = |%*.*f|\n", max_len, precision, v.y);
	ft_printf("    |%*.*f|\n", max_len, precision, v.z);
	ft_printf("    ⌞%*.*f⌟\n\n", max_len, precision, v.w);
}

void	ft_print_vector3D(t_vector3D v, int precision)
{
	int	max_len;

	max_len = ft_max(ft_max(ft_doublelen(v.x, precision), ft_doublelen(v.y,
					precision)), ft_doublelen(v.z, precision));
	ft_printf("    ⌜%*.*f⌝\n", max_len, precision, v.x);
	ft_printf("v = |%*.*f|\n", max_len, precision, v.y);
	ft_printf("    ⌞%*.*f⌟\n\n", max_len, precision, v.z);
}

void	ft_print_vector2D(t_vector2D v, int precision)
{
	int	max_len;

	max_len = ft_max(ft_doublelen(v.x, precision), ft_doublelen(v.y,
				precision));
	ft_printf("v = ⌜%*.*f⌝\n", max_len, precision, v.x);
	ft_printf("    ⌞%*.*f⌟\n\n", max_len, precision, v.y);
}
