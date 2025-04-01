/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_rotation_matrix.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:04:30 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 18:24:05 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include <math.h>

void	ft_set_base_rotation_mat2(double m[2][2], double angle)
{
	ft_set_null_mat2(m);
	m[0][0] = cos(angle);
	m[1][0] = sin(angle);
	m[0][1] = -sin(angle);
	m[1][1] = cos(angle);
}

void	ft_set_base_rotation_mat3(double m[3][3], double angle, t_axis axis)
{
	ft_set_null_mat3(m);
	m[axis][axis] = 1;
	m[(axis + 1) % 3][(axis + 1) % 3] = cos(angle);
	m[(axis + 2) % 3][(axis + 2) % 3] = cos(angle);
	m[(axis + 1) % 3][(axis + 2) % 3] = -sin(angle);
	m[(axis + 2) % 3][(axis + 1) % 3] = sin(angle);
}

void	ft_set_base_rotation_mat4(double m[4][4], double angle, t_axis axis)
{
	double	m3[3][3];

	ft_set_base_rotation_mat3(m3, angle, axis);
	ft_3to4_mat(m3, m);
}

void	ft_set_rotation_mat3(double m[3][3], double angle, t_vec3 axis)
{
	double	omc;

	omc = 1 - cos(angle);
	m[0][0] = axis.x * axis.x * omc + cos(angle);
	m[1][0] = axis.x * axis.y * omc + axis.z * sin(angle);
	m[2][0] = axis.x * axis.z * omc - axis.y * sin(angle);
	m[0][1] = axis.y * axis.x * omc - axis.z * sin(angle);
	m[1][1] = axis.y * axis.y * omc + cos(angle);
	m[2][1] = axis.y * axis.z * omc + axis.x * sin(angle);
	m[0][2] = axis.z * axis.x * omc + axis.y * sin(angle);
	m[1][2] = axis.z * axis.y * omc - axis.x * sin(angle);
	m[2][2] = axis.z * axis.z * omc + cos(angle);
}

void	ft_set_rotation_mat4(double m[4][4], double angle, t_vec3 axis)
{
	double	m3[3][3];

	ft_set_rotation_mat3(m3, angle, axis);
	ft_3to4_mat(m3, m);
}
