/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_base_vector.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:36:11 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 12:41:20 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vector2D	ft_get_base_vector2D(t_axis axis)
{
	t_vector2D	bv;

	bv = ft_init_vector2D(0);
	if (axis != 0 && axis != 1)
		return (bv);
	if (axis == 0)
		bv.x = 1;
	else if (axis == 1)
		bv.y = 1;
	return (bv);
}

t_vector3D	ft_get_base_vector3D(t_axis axis)
{
	t_vector3D	bv;

	bv = ft_init_vector3D(0);
	if (axis != 0 && axis != 1 && axis != 2)
		return (bv);
	if (axis == 0)
		bv.x = 1;
	else if (axis == 1)
		bv.y = 1;
	else if (axis == 2)
		bv.z = 1;
	return (bv);
}

t_vector4D	ft_get_base_vector4D(t_axis axis)
{
	return (ft_3Dto4D_vector(ft_get_base_vector3D(axis)));
}
