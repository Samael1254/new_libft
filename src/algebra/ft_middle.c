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

t_vector2D	ft_middle2D(t_vector2D a, t_vector2D b)
{
	t_vector2D	middle;

	middle.x = (a.x + b.x) * 0.5;
	middle.y = (a.y + b.y) * 0.5;
	return (middle);
}

t_vector3D	ft_middle3D(t_vector3D a, t_vector3D b)
{
	t_vector3D	middle;

	middle.x = (a.x + b.x) * 0.5;
	middle.y = (a.y + b.y) * 0.5;
	middle.z = (a.z + b.z) * 0.5;
	return (middle);
}
