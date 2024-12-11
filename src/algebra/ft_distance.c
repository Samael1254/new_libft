/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_distance.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:21:59 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 16:51:49 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

double	ft_distance2D(t_vector2D a, t_vector2D b)
{
	return (ft_vector2D_norm(ft_sub_vectors2D(a, b)));
}

double	ft_distance3D(t_vector3D a, t_vector3D b)
{
	return (ft_vector3D_norm(ft_sub_vectors3D(a, b)));
}
