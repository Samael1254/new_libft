/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_translation_matrix.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:04:30 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 12:09:17 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

void	ft_set_translation_matrix3d(double m[3][3], t_vector2d t)
{
	int	i;

	ft_set_null_matrix3d(m);
	i = 0;
	while (i < 3)
	{
		m[i][i] = 1;
		i++;
	}
	m[0][2] = t.x;
	m[1][2] = t.y;
}

void	ft_set_translation_matrix4d(double m[4][4], t_vector3d t)
{
	int	i;

	ft_set_null_matrix4d(m);
	i = 0;
	while (i < 4)
	{
		m[i][i] = 1;
		i++;
	}
	m[0][3] = t.x;
	m[1][3] = t.y;
	m[2][3] = t.z;
}
