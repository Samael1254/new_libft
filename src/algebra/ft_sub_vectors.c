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

t_ivector2d	ft_sub_ivectors2d(t_ivector2d a, t_ivector2d b)
{
	t_ivector2d	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	return (sub);
}

t_vector2d	ft_sub_vectors2d(t_vector2d a, t_vector2d b)
{
	t_vector2d	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	return (sub);
}

t_vector3d	ft_sub_vectors3d(t_vector3d a, t_vector3d b)
{
	t_vector3d	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	sub.z = a.z - b.z;
	return (sub);
}

t_vector4d	ft_sub_vectors4d(t_vector4d a, t_vector4d b)
{
	t_vector4d	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	sub.z = a.z - b.z;
	sub.w = a.w - b.w;
	return (sub);
}
