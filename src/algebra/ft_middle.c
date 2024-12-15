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

t_vector2d	ft_middle2d(t_vector2d a, t_vector2d b)
{
	t_vector2d	middle;

	middle.x = (a.x + b.x) * 0.5;
	middle.y = (a.y + b.y) * 0.5;
	return (middle);
}

t_vector3d	ft_middle3d(t_vector3d a, t_vector3d b)
{
	t_vector3d	middle;

	middle.x = (a.x + b.x) * 0.5;
	middle.y = (a.y + b.y) * 0.5;
	middle.z = (a.z + b.z) * 0.5;
	return (middle);
}
