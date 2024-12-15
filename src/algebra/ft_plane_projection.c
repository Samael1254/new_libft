/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_plane_projection.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 13:38:13 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/15 15:48:59 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vector3d	ft_plane_projection(t_vector4d v, t_axis normal)
{
	t_vector3d	proj;

	if (normal == X_AXIS)
	{
		proj.x = v.x;
		proj.y = -v.y;
	}
	else if (normal == Z_AXIS)
	{
		proj.x = v.y;
		proj.y = v.z;
	}
	else if (normal == Y_AXIS)
	{
		proj.x = v.x;
		proj.y = v.z;
	}
	proj.z = 1;
	return (proj);
}
