/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isometric_projection.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:57:13 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 14:15:15 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include <math.h>

t_vector3D	ft_isometric_projection(t_vector4D v)
{
	double	tm[4][4];
	double	rm2[4][4];

	ft_set_base_rotation_matrix4D(tm, asin(tan(M_PI_2 / 3)), X_AXIS);
	ft_set_base_rotation_matrix4D(rm2, M_PI_4, Z_AXIS);
	ft_matrix4D_product(tm, rm2, tm);
	return (ft_orthographic_projection(ft_matrix_vector_product4D(tm, v)));
}
