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

t_vec2	ft_lines2d_intersection(t_vec3 l1, t_vec3 l2)
{
	t_vec2	inter;

	if (ft_are_vec2_col(ft_direction_vec2(l1),
			ft_direction_vec2(l2)))
		return (ft_init_vec2(INFINITY));
	inter.x = l1.y * l2.z - l2.y * l1.z;
	inter.y = l2.x * l1.z - l1.x * l2.z;
	return (inter);
}
