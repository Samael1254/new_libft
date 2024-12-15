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

t_vector2d	ft_lerp2d(t_vector2d a, t_vector2d b, double lambda)
{
	t_vector2d	lerp;

	lambda = ft_clampf(lambda, 0, 1);
	lerp.x = a.x * (1 - lambda) + b.x * lambda;
	lerp.y = a.y * (1 - lambda) + b.y * lambda;
	return (lerp);
}

t_vector3d	ft_lerp3d(t_vector3d a, t_vector3d b, double lambda)
{
	t_vector3d	lerp;

	lambda = ft_clampf(lambda, 0, 1);
	lerp.x = a.x * (1 - lambda) + b.x * lambda;
	lerp.y = a.y * (1 - lambda) + b.y * lambda;
	lerp.z = a.z * (1 - lambda) + b.z * lambda;
	return (lerp);
}
