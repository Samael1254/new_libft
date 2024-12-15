/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oblique_projection.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:55:24 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/14 22:42:22 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include <math.h>

t_vector3d	ft_oblique_projection(t_vector4d v, double depth, double angle)
{
	t_vector3d	proj;

	proj.x = v.x + depth * cos(angle) * v.y;
	proj.y = v.z - depth * sin(angle) * v.y;
	proj.z = 1;
	return (proj);
}

t_vector3d	ft_cavalier_projection(t_vector4d v)
{
	return (ft_oblique_projection(v, 1, M_PI_4));
}

t_vector3d	ft_cabinet_projection(t_vector4d v)
{
	return (ft_oblique_projection(v, 0.5, M_PI_4));
}
