/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 10:53:38 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 10:53:38 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

void	ft_set_vector2D(t_vector2D *v, double x, double y)
{
	v->x = x;
	v->y = y;
}

void	ft_set_vector3D(t_vector3D *v, double x, double y, double z)
{
	v->x = x;
	v->y = y;
	v->z = z;
}
