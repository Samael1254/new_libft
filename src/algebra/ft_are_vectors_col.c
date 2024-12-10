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

#include "algebra.h"

int	ft_are_vectors2D_col(t_vector2D a, t_vector2D b)
{
	if (a.x * b.y == a.y * b.x)
		return (1);
	return (0);
}

int	ft_are_vectors3D_col(t_vector3D a, t_vector3D b)
{
	if (ft_vector3D_norm(ft_cross_vectors3D(a, b)) == 0)
		return (1);
	return (0);
}
