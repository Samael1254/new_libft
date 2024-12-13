/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_oblique_projection.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 16:55:24 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/12 17:30:20 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include <math.h>

t_vector3D	ft_oblique_projection(t_vector4D v, double depth, double angle)
{
	t_vector3D	proj;

	proj.x = v.x + depth * cos(angle) * v.z;
	proj.y = v.y + depth * sin(angle) * v.z;
	proj.z = 1;
	return (proj);
}

t_vector3D	ft_cavalier_projection(t_vector4D v)
{
	return (ft_oblique_projection(v, 1, M_PI_4));
}

t_vector3D	ft_cabinet_projection(t_vector4D v)
{
	return (ft_oblique_projection(v, 0.5, M_PI_4));
}
