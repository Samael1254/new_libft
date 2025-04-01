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

int	ft_are_vec2_col(t_vec2 a, t_vec2 b)
{
	if (a.x * b.y == a.y * b.x)
		return (1);
	return (0);
}

int	ft_are_vec3_col(t_vec3 a, t_vec3 b)
{
	if (ft_vec3_norm(ft_cross_vec3(a, b)) == 0)
		return (1);
	return (0);
}
