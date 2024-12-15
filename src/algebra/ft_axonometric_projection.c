/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isometric_projection.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:57:13 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 19:05:13 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include <math.h>

t_vector3d	ft_axonometric_projection(t_vector4d v, double ang1, double ang2)
{
	t_vector3d	proj;

	proj.x = cos(ang2) * v.x - sin(ang2) * v.y;
	proj.y = -sin(ang2) * sin(ang1) * v.x - cos(ang2) * sin(ang1) * v.y
		+ cos(ang1) * v.z;
	proj.z = 1;
	return (proj);
}

t_vector3d	ft_dimetric_projection(t_vector4d v, double ang1)
{
	return (ft_axonometric_projection(v, ang1, M_PI_4));
}

t_vector3d	ft_isometric_projection(t_vector4d v)
{
	return (ft_dimetric_projection(v, asin(tan(M_PI_2 / 3))));
}
