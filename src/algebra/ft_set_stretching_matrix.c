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

void	ft_set_stretching_mat3(double m[3][3], t_vec3 s)
{
	ft_set_null_mat3(m);
	m[0][0] = s.x;
	m[1][1] = s.y;
	m[2][2] = s.z;
}

void	ft_set_stretching_mat4(double m[4][4], t_vec4 s)
{
	ft_set_null_mat4(m);
	m[0][0] = s.x;
	m[1][1] = s.y;
	m[2][2] = s.z;
	m[3][3] = s.z;
}
