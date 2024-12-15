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

t_vector2d	ft_get_base_vector2d(t_axis axis)
{
	t_vector2d	bv;

	bv = ft_init_vector2d(0);
	if (axis != 0 && axis != 1)
		return (bv);
	if (axis == 0)
		bv.x = 1;
	else if (axis == 1)
		bv.y = 1;
	return (bv);
}

t_vector3d	ft_get_base_vector3d(t_axis axis)
{
	t_vector3d	bv;

	bv = ft_init_vector3d(0);
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

t_vector4d	ft_get_base_vector4d(t_axis axis)
{
	return (ft_3dto4d_vector(ft_get_base_vector3d(axis)));
}
