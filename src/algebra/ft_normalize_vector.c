/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:14:01 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 16:13:18 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vector2d	ft_normalize_vector2d(t_vector2d a)
{
	t_vector2d	normalized;
	double		norm;

	norm = ft_vector2d_norm(a);
	if (norm == 0)
		return (a);
	normalized.x = a.x / norm;
	normalized.y = a.y / norm;
	return (normalized);
}

t_vector3d	ft_normalize_vector3d(t_vector3d a)
{
	t_vector3d	normalized;
	double		norm;

	norm = ft_vector3d_norm(a);
	if (norm == 0)
		return (a);
	normalized.x = a.x / norm;
	normalized.y = a.y / norm;
	normalized.z = a.z / norm;
	return (normalized);
}
