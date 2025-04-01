/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_vectors.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:38 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 15:35:34 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_ivec2	ft_add_ivec2(t_ivec2 a, t_ivec2 b)
{
	t_ivec2	sum;

	sum.x = a.x + b.x;
	sum.y = a.y + b.y;
	return (sum);
}

t_vec2	ft_add_vec2(t_vec2 a, t_vec2 b)
{
	t_vec2	sum;

	sum.x = a.x + b.x;
	sum.y = a.y + b.y;
	return (sum);
}

t_vec3	ft_add_vec3(t_vec3 a, t_vec3 b)
{
	t_vec3	sum;

	sum.x = a.x + b.x;
	sum.y = a.y + b.y;
	sum.z = a.z + b.z;
	return (sum);
}

t_vec4	ft_add_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	sum;

	sum.x = a.x + b.x;
	sum.y = a.y + b.y;
	sum.z = a.z + b.z;
	sum.w = a.w + b.w;
	return (sum);
}
