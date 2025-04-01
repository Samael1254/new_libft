/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:53:38 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/14 23:10:15 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_ivec2	ft_set_ivec2(int x, int y)
{
	t_ivec2	v;

	v.x = x;
	v.y = y;
	return (v);
}

t_vec2	ft_set_vec2(double x, double y)
{
	t_vec2	v;

	v.x = x;
	v.y = y;
	return (v);
}

t_vec3	ft_set_vec3(double x, double y, double z)
{
	t_vec3	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

t_vec4	ft_set_vec4(double x, double y, double z, double w)
{
	t_vec4	v;

	v.x = x;
	v.y = y;
	v.z = z;
	v.w = w;
	return (v);
}
