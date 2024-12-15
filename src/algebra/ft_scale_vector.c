/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scale_vector.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:38 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 16:06:18 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_ivector2d	ft_scale_ivector2d(int lambda, t_ivector2d a)
{
	t_ivector2d	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	return (scaled);
}

t_vector2d	ft_scale_vector2d(int lambda, t_vector2d a)
{
	t_vector2d	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	return (scaled);
}

t_vector3d	ft_scale_vector3d(int lambda, t_vector3d a)
{
	t_vector3d	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	scaled.z = lambda * a.z;
	return (scaled);
}

t_vector4d	ft_scale_vector4d(int lambda, t_vector4d a)
{
	t_vector4d	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	scaled.z = lambda * a.z;
	scaled.w = lambda * a.w;
	return (scaled);
}
