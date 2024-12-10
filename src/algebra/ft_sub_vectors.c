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

#include "algebra.h"

t_ivector2D	ft_sub_ivectors2D(t_ivector2D a, t_ivector2D b)
{
	t_ivector2D	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	return (sub);
}

t_vector2D	ft_sub_vectors2D(t_vector2D a, t_vector2D b)
{
	t_vector2D	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	return (sub);
}

t_vector3D	ft_sub_vectors3D(t_vector3D a, t_vector3D b)
{
	t_vector3D	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	sub.z = a.z - b.z;
	return (sub);
}

t_vector4D	ft_sub_vectors4D(t_vector4D a, t_vector4D b)
{
	t_vector4D	sub;

	sub.x = a.x - b.x;
	sub.y = a.y - b.y;
	sub.z = a.z - b.z;
	sub.w = a.w - b.w;
	return (sub);
}
