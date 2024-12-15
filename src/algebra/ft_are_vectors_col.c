/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_are_vectors_col.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:00:07 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 17:05:44 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

int	ft_are_vectors2d_col(t_vector2d a, t_vector2d b)
{
	if (a.x * b.y == a.y * b.x)
		return (1);
	return (0);
}

int	ft_are_vectors3d_col(t_vector3d a, t_vector3d b)
{
	if (ft_vector3d_norm(ft_cross_vectors3d(a, b)) == 0)
		return (1);
	return (0);
}
