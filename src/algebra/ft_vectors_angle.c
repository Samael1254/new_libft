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

#include "algebra.h"
#include <math.h>

double	ft_vectors2D_angle(t_vector2D a, t_vector2D b)
{
	return (acos(ft_dot_vectors2D(a, b) / (ft_vector2D_norm(a)
				* ft_vector2D_norm(b))));
}

double	ft_vectors3D_angle(t_vector3D a, t_vector3D b)
{
	return (acos(ft_dot_vectors3D(a, b) / (ft_vector3D_norm(a)
				* ft_vector3D_norm(b))));
}
