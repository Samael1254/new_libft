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

t_vector4d	ft_rotate_vector4d(t_vector4d v, t_vector3d rotator)
{
	double	rx[4][4];
	double	ry[4][4];
	double	rz[4][4];

	ft_set_base_rotation_matrix4d(rx, rotator.x, X_AXIS);
	ft_set_base_rotation_matrix4d(ry, rotator.y, Y_AXIS);
	ft_set_base_rotation_matrix4d(rz, rotator.z, Z_AXIS);
	v = ft_matrix_vector_product4d(rz, ft_matrix_vector_product4d(ry,
				ft_matrix_vector_product4d(rx, v)));
	return (v);
}

t_vector3d	ft_rotate_vector3d(t_vector3d v, t_vector2d rotator)
{
	double	rx[3][3];
	double	ry[3][3];

	ft_set_base_rotation_matrix3d(rx, rotator.x, X_AXIS);
	ft_set_base_rotation_matrix3d(ry, rotator.y, Y_AXIS);
	v = ft_matrix_vector_product3d(ry, ft_matrix_vector_product3d(rx, v));
	return (v);
}
