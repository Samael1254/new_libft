/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lines_intersection.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:43:00 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 10:55:29 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include <math.h>

t_vector2d	ft_lines2d_intersection(t_vector3d l1, t_vector3d l2)
{
	t_vector2d	inter;

	if (ft_are_vectors2d_col(ft_direction_vector2d(l1),
			ft_direction_vector2d(l2)))
		return (ft_init_vector2d(INFINITY));
	inter.x = l1.y * l2.z - l2.y * l1.z;
	inter.y = l2.x * l1.z - l1.x * l2.z;
	return (inter);
}
