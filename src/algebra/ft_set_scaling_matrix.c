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

void	ft_set_scaling_matrix3d(double m[3][3], double s)
{
	t_vector3d	v;

	v = ft_init_vector3d(s);
	ft_set_stretching_matrix3d(m, v);
}

void	ft_set_scaling_matrix4d(double m[4][4], double s)
{
	double	m3[3][3];

	ft_set_scaling_matrix3d(m3, s);
	ft_3dto4d_matrix(m3, m);
}
