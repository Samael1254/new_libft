/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_middle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:21:59 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 17:12:06 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vec2	ft_middle2d(t_vec2 a, t_vec2 b)
{
	t_vec2	middle;

	middle.x = (a.x + b.x) * 0.5;
	middle.y = (a.y + b.y) * 0.5;
	return (middle);
}

t_vec3	ft_middle3d(t_vec3 a, t_vec3 b)
{
	t_vec3	middle;

	middle.x = (a.x + b.x) * 0.5;
	middle.y = (a.y + b.y) * 0.5;
	middle.z = (a.z + b.z) * 0.5;
	return (middle);
}
