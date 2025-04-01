/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lerp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 16:28:26 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 16:39:20 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include "ft_math.h"

t_vec2	ft_lerp2d(t_vec2 a, t_vec2 b, double lambda)
{
	t_vec2	lerp;

	lambda = ft_clampf(lambda, 0, 1);
	lerp.x = a.x * (1 - lambda) + b.x * lambda;
	lerp.y = a.y * (1 - lambda) + b.y * lambda;
	return (lerp);
}

t_vec3	ft_lerp3d(t_vec3 a, t_vec3 b, double lambda)
{
	t_vec3	lerp;

	lambda = ft_clampf(lambda, 0, 1);
	lerp.x = a.x * (1 - lambda) + b.x * lambda;
	lerp.y = a.y * (1 - lambda) + b.y * lambda;
	lerp.z = a.z * (1 - lambda) + b.z * lambda;
	return (lerp);
}
