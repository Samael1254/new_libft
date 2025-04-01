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

double	ft_distance2d(t_vec2 a, t_vec2 b)
{
	return (ft_vec2_norm(ft_sub_vec2(a, b)));
}

double	ft_distance3d(t_vec3 a, t_vec3 b)
{
	return (ft_vec3_norm(ft_sub_vec3(a, b)));
}
