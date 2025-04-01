/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sub_vectors.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:38 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 15:37:49 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_ivec2	ft_sub_ivec2(t_ivec2 a, t_ivec2 b)
{
	t_ivec2	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	return (sub);
}

t_vec2	ft_sub_vec2(t_vec2 a, t_vec2 b)
{
	t_vec2	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	return (sub);
}

t_vec3	ft_sub_vec3(t_vec3 a, t_vec3 b)
{
	t_vec3	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	sub.z = a.z - b.z;
	return (sub);
}

t_vec4	ft_sub_vec4(t_vec4 a, t_vec4 b)
{
	t_vec4	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	sub.z = a.z - b.z;
	sub.w = a.w - b.w;
	return (sub);
}
