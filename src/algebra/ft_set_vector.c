/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:53:38 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/14 23:10:15 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_ivector2D	ft_set_ivector2D(int x, int y)
{
	t_ivector2D	v;

	v.x = x;
	v.y = y;
	return (v);
}

t_vector2D	ft_set_vector2D(double x, double y)
{
	t_vector2D	v;

	v.x = x;
	v.y = y;
	return (v);
}

t_vector3D	ft_set_vector3D(double x, double y, double z)
{
	t_vector3D	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

t_vector4D	ft_set_vector4D(double x, double y, double z, double w)
{
	t_vector4D	v;

	v.x = x;
	v.y = y;
	v.z = z;
	v.w = w;
	return (v);
}
