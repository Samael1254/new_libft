/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_vector.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:03:05 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 12:07:16 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include <math.h>

t_vector2d	ft_3dto2d_vector(t_vector3d v3)
{
	t_vector2d	v2;

	if (v3.z == 0)
		return (ft_init_vector2d(INFINITY));
	v2.x = v3.x / v3.z;
	v2.y = v3.y / v3.z;
	return (v2);
}

t_vector3d	ft_4dto3d_vector(t_vector4d v4)
{
	t_vector3d	v3;

	if (v4.w == 0)
		return (ft_init_vector3d(INFINITY));
	v3.x = v4.x / v4.w;
	v3.y = v4.y / v4.w;
	v3.z = v4.z / v4.w;
	return (v3);
}

t_vector4d	ft_3dto4d_vector(t_vector3d v3)
{
	t_vector4d	v4;

	v4.x = v3.x;
	v4.y = v3.y;
	v4.z = v3.z;
	v4.w = 1;
	return (v4);
}

t_vector3d	ft_2dto3d_vector(t_vector2d v2)
{
	t_vector3d	v3;

	v3.x = v2.x;
	v3.y = v2.y;
	v3.z = 1;
	return (v3);
}

t_vector2d	ft_i2dto2d_vector(t_ivector2d vi2)
{
	t_vector2d	v2;

	v2.x = (double)vi2.x;
	v2.y = (double)vi2.y;
	return (v2);
}
