/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_vector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:39:39 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 12:22:10 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vec2	ft_init_vec2(double value)
{
	t_vec2	v;

	v.x = value;
	v.y = value;
	return (v);
}

t_vec3	ft_init_vec3(double value)
{
	t_vec3	v;

	v.x = value;
	v.y = value;
	v.z = value;
	return (v);
}

t_vec4	ft_init_vec4(double value)
{
	t_vec4	v;

	v.x = value;
	v.y = value;
	v.z = value;
	v.w = value;
	return (v);
}
