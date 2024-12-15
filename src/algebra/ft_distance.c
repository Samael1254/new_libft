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

double	ft_distance2d(t_vector2d a, t_vector2d b)
{
	return (ft_vector2d_norm(ft_sub_vectors2d(a, b)));
}

double	ft_distance3d(t_vector3d a, t_vector3d b)
{
	return (ft_vector3d_norm(ft_sub_vectors3d(a, b)));
}
