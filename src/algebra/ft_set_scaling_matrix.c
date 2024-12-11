/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_scaling_matrix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 12:12:05 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 15:44:20 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

void	ft_set_scaling_matrix3D(double m[3][3], double s)
{
	t_vector3D	v;

	v = ft_init_vector3D(s);
	ft_set_stretching_matrix3D(m, v);
}

void	ft_set_scaling_matrix4D(double m[4][4], double s)
{
	double	m3[3][3];

	ft_set_scaling_matrix3D(m3, s);
	ft_3Dto4D_matrix(m3, m);
}
