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

t_vector4D	ft_rotate_vector4D(t_vector4D v, t_vector3D rotator)
{
	double	rx[4][4];
	double	ry[4][4];
	double	rz[4][4];

	ft_set_base_rotation_matrix4D(rx, rotator.x, X_AXIS);
	ft_set_base_rotation_matrix4D(ry, rotator.y, Y_AXIS);
	ft_set_base_rotation_matrix4D(rz, rotator.z, Z_AXIS);
	v = ft_matrix_vector_product4D(rz, ft_matrix_vector_product4D(ry,
				ft_matrix_vector_product4D(rx, v)));
	return (v);
}

t_vector3D	ft_rotate_vector3D(t_vector3D v, t_vector2D rotator)
{
	double	rx[3][3];
	double	ry[3][3];

	ft_set_base_rotation_matrix3D(rx, rotator.x, X_AXIS);
	ft_set_base_rotation_matrix3D(ry, rotator.y, Y_AXIS);
	v = ft_matrix_vector_product3D(ry, ft_matrix_vector_product3D(rx, v));
	return (v);
}
