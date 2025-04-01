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

#include "ft_algebra.h"
#include <math.h>

double	ft_vec2_angle(t_vec2 a, t_vec2 b)
{
	return (acos(ft_dot_vec2(a, b) / (ft_vec2_norm(a)
				* ft_vec2_norm(b))));
}

double	ft_vec3_angle(t_vec3 a, t_vec3 b)
{
	return (acos(ft_dot_vec3(a, b) / (ft_vec3_norm(a)
				* ft_vec3_norm(b))));
}
