/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_normalize_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:14:01 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 16:16:03 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algebra.h"

t_vector2D	ft_normalize_vector2D(t_vector2D a)
{
	t_vector2D	normalized;
	double		norm;

	norm = ft_vector2D_norm(a);
	normalized.x = a.x / norm;
	normalized.y = a.y / norm;
	return (normalized);
}

t_vector3D	ft_normalize_vector3D(t_vector3D a)
{
	t_vector3D	normalized;
	double		norm;

	norm = ft_vector3D_norm(a);
	normalized.x = a.x / norm;
	normalized.y = a.y / norm;
	normalized.z = a.z / norm;
	return (normalized);
}
