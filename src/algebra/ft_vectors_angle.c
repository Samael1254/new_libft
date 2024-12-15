/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vectors_angle.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:53:15 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 16:58:21 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include <math.h>

double	ft_vectors2d_angle(t_vector2d a, t_vector2d b)
{
	return (acos(ft_dot_vectors2d(a, b) / (ft_vector2d_norm(a)
				* ft_vector2d_norm(b))));
}

double	ft_vectors3d_angle(t_vector3d a, t_vector3d b)
{
	return (acos(ft_dot_vectors3d(a, b) / (ft_vector3d_norm(a)
				* ft_vector3d_norm(b))));
}
