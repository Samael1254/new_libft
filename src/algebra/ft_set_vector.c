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

t_ivector2d	ft_set_ivector2d(int x, int y)
{
	t_ivector2d	v;

	v.x = x;
	v.y = y;
	return (v);
}

t_vector2d	ft_set_vector2d(double x, double y)
{
	t_vector2d	v;

	v.x = x;
	v.y = y;
	return (v);
}

t_vector3d	ft_set_vector3d(double x, double y, double z)
{
	t_vector3d	v;

	v.x = x;
	v.y = y;
	v.z = z;
	return (v);
}

t_vector4d	ft_set_vector4d(double x, double y, double z, double w)
{
	t_vector4d	v;

	v.x = x;
	v.y = y;
	v.z = z;
	v.w = w;
	return (v);
}
