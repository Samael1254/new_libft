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

t_vector2D	ft_lines2D_intersection(t_vector3D l1, t_vector3D l2)
{
	t_vector2D	inter;

	if (ft_are_vectors2D_col(ft_direction_vector2D(l1),
			ft_direction_vector2D(l2)))
		return (ft_init_vector2D(INFINITY));
	inter.x = l1.y * l2.z - l2.y * l1.z;
	inter.y = l2.x * l1.z - l1.x * l2.z;
	return (inter);
}
