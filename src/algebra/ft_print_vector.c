/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:08:16 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 19:21:24 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include "ft_printf.h"

void	ft_print_vector4D(t_vector4D v, int precision)
{
	int	max_len;

	ft_printf("    ⌜%*.*f⌝\n", v.x);
	ft_printf("v = |%*.*f|\n", v.y);
	ft_printf("    |%*.*f|\n", v.z);
	ft_printf("    ⌞%*.*f⌟\n\n", v.w);
}

void	ft_print_vector3D(t_vector3D v)
{
	ft_printf("    ⌜%4.2f⌝\n", v.x);
	ft_printf("v = |%4.2f|\n", v.y);
	ft_printf("    ⌞%4.2f⌟\n\n", v.z);
}

void	ft_print_vector2D(t_vector2D v)
{
	ft_printf("v = ⌜%4.2f⌝\n", v.x);
	ft_printf("    ⌞%4.2f⌟\n\n", v.y);
}
