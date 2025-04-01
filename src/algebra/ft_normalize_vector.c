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

t_vec2	ft_normalize_vec2(t_vec2 a)
{
	t_vec2	normalized;
	double		norm;

	norm = ft_vec2_norm(a);
	if (norm == 0)
		return (a);
	normalized.x = a.x / norm;
	normalized.y = a.y / norm;
	return (normalized);
}

t_vec3	ft_normalize_vec3(t_vec3 a)
{
	t_vec3	normalized;
	double		norm;

	norm = ft_vec3_norm(a);
	if (norm == 0)
		return (a);
	normalized.x = a.x / norm;
	normalized.y = a.y / norm;
	normalized.z = a.z / norm;
	return (normalized);
}
