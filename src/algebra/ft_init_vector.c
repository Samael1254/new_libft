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

t_vector2D	ft_init_vector2D(double value)
{
	t_vector2D	v;

	v.x = value;
	v.y = value;
	return (v);
}

t_vector3D	ft_init_vector3D(double value)
{
	t_vector3D	v;

	v.x = value;
	v.y = value;
	v.z = value;
	return (v);
}

t_vector4D	ft_init_vector4D(double value)
{
	t_vector4D	v;

	v.x = value;
	v.y = value;
	v.z = value;
	v.w = value;
	return (v);
}
