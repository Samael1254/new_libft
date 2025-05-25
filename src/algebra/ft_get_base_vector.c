/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_base_vector.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:36:11 by gfulconi          #+#    #+#             */
/*   Updated: 2025/05/25 14:04:07 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vec2	ft_get_base_vec2(t_axis axis)
{
	t_vec2	bv;

	bv = ft_init_vec2(0);
	if (axis != 0 && axis != 1)
		return (bv);
	if (axis == 0)
		bv.x = 1;
	else if (axis == 1)
		bv.y = 1;
	return (bv);
}

t_vec3	ft_get_base_vec3(t_axis axis)
{
	t_vec3	bv;

	bv = ft_init_vec3(0);
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

t_vec4	ft_get_base_vec4(t_axis axis)
{
	return (ft_3to4_vec(ft_get_base_vec3(axis)));
}
