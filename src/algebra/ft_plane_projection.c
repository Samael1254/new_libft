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

t_vector3D	ft_plane_projection(t_vector4D v, t_axis normal)
{
	t_vector3D	proj;

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
