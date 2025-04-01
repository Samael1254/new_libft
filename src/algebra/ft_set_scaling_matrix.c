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

void	ft_set_scaling_mat3(double m[3][3], double s)
{
	t_vec3	v;

	v = ft_init_vec3(s);
	ft_set_stretching_mat3(m, v);
}

void	ft_set_scaling_mat4(double m[4][4], double s)
{
	double	m3[3][3];

	ft_set_scaling_mat3(m3, s);
	ft_3to4_mat(m3, m);
}
