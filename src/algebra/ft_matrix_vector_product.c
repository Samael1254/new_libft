/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_vector_product.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:04:41 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 14:10:02 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vector3D	ft_matrix_vector_product3D(double m[3][3], t_vector3D v)
{
	t_vector3D	prod;

	prod.x = v.x * m[0][0] + v.y * m[0][1] + v.z * m[0][2];
	prod.y = v.x * m[1][0] + v.y * m[1][1] + v.z * m[1][2];
	prod.z = v.x * m[2][0] + v.y * m[2][1] + v.z * m[2][2];
	return (prod);
}

t_vector4D	ft_matrix_vector_product4D(double m[4][4], t_vector4D v)
{
	t_vector4D	prod;

	prod.x = v.x * m[0][0] + v.y * m[0][1] + v.z * m[0][2] + v.w * m[0][3];
	prod.y = v.x * m[1][0] + v.y * m[1][1] + v.z * m[1][2] + v.w * m[1][3];
	prod.z = v.x * m[2][0] + v.y * m[2][1] + v.z * m[2][2] + v.w * m[2][3];
	prod.w = v.x * m[3][0] + v.y * m[3][1] + v.z * m[3][2] + v.w * m[3][3];
	return (prod);
}
