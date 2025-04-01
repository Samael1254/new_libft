/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate_vector.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:47:56 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/12 17:51:58 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vec4	ft_rotate_vec4(t_vec4 v, t_vec3 rotator)
{
	double	rx[4][4];
	double	ry[4][4];
	double	rz[4][4];

	ft_set_base_rotation_mat4(rx, rotator.x, X_AXIS);
	ft_set_base_rotation_mat4(ry, rotator.y, Y_AXIS);
	ft_set_base_rotation_mat4(rz, rotator.z, Z_AXIS);
	v = ft_mat_vec_product4(rz, ft_mat_vec_product4(ry,
				ft_mat_vec_product4(rx, v)));
	return (v);
}

t_vec3	ft_rotate_vec3(t_vec3 v, t_vec2 rotator)
{
	double	rx[3][3];
	double	ry[3][3];

	ft_set_base_rotation_mat3(rx, rotator.x, X_AXIS);
	ft_set_base_rotation_mat3(ry, rotator.y, Y_AXIS);
	v = ft_mat_vec_product3(ry, ft_mat_vec_product3(rx, v));
	return (v);
}
