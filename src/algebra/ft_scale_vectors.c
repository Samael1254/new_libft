/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scale_vectors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:38 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 15:41:44 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algebra.h"

t_ivector2D	ft_scale_ivectors2D(int lambda, t_ivector2D a)
{
	t_ivector2D	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	return (scaled);
}

t_vector2D	ft_scale_vectors2D(int lambda, t_vector2D a)
{
	t_vector2D	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	return (scaled);
}

t_vector3D	ft_scale_vectors3D(int lambda, t_vector3D a)
{
	t_vector3D	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	scaled.z = lambda * a.z;
	return (scaled);
}

t_vector4D	ft_scale_vectors4D(int lambda, t_vector4D a)
{
	t_vector4D	scaled;

	scaled.x = lambda * a.x;
	scaled.y = lambda * a.y;
	scaled.z = lambda * a.z;
	scaled.w = lambda * a.w;
	return (scaled);
}
