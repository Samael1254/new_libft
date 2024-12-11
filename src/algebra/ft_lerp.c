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

t_vector2D	ft_lerp2D(t_vector2D a, t_vector2D b, double lambda)
{
	t_vector2D	lerp;

	lambda = ft_clampf(lambda, 0, 1);
	lerp.x = a.x * (1 - lambda) + b.x * lambda;
	lerp.y = a.y * (1 - lambda) + b.y * lambda;
	return (lerp);
}

t_vector3D	ft_lerp3D(t_vector3D a, t_vector3D b, double lambda)
{
	t_vector3D	lerp;

	lambda = ft_clampf(lambda, 0, 1);
	lerp.x = a.x * (1 - lambda) + b.x * lambda;
	lerp.y = a.y * (1 - lambda) + b.y * lambda;
	lerp.z = a.z * (1 - lambda) + b.z * lambda;
	return (lerp);
}
