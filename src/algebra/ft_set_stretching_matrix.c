/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_stretching_matrix.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:15:43 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 12:18:01 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

void	ft_set_stretching_matrix3D(double m[3][3], t_vector3D s)
{
	ft_set_null_matrix3D(m);
	m[0][0] = s.x;
	m[1][1] = s.y;
	m[2][2] = s.z;
}

void	ft_set_stretching_matrix4D(double m[4][4], t_vector4D s)
{
	ft_set_null_matrix4D(m);
	m[0][0] = s.x;
	m[1][1] = s.y;
	m[2][2] = s.z;
	m[3][3] = s.z;
}
