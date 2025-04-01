/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scale_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:38 by gfulconi          #+#    #+#             */
/*   Updated: 2025/03/07 13:45:01 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_ivec2	ft_scale_ivec2(int lambda, t_ivec2 a)
{
	t_ivec2	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	return (scaled);
}

t_vec2	ft_scale_vec2(double lambda, t_vec2 a)
{
	t_vec2	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	return (scaled);
}

t_vec3	ft_scale_vec3(double lambda, t_vec3 a)
{
	t_vec3	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	scaled.z = lambda * a.z;
	return (scaled);
}

t_vec4	ft_scale_vec4(double lambda, t_vec4 a)
{
	t_vec4	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	scaled.z = lambda * a.z;
	scaled.w = lambda * a.w;
	return (scaled);
}
