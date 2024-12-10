/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_norm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:50:13 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 16:50:44 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "algebra.h"
#include "ft_math.h"
#include <math.h>

double	ft_vector2D_norm(t_vector2D a)
{
	return (sqrt(ft_powerf(a.x, 2) + ft_powerf(a.y, 2)));
}

double	ft_vector3D_norm(t_vector3D a)
{
	return (sqrt(ft_powerf(a.x, 2) + ft_powerf(a.y, 2) + ft_powerf(a.z, 2)));
}

double	ft_vector2D_square_norm(t_vector2D a)
{
	return (ft_powerf(a.x, 2) + ft_powerf(a.y, 2));
}

double	ft_vector3D_square_norm(t_vector3D a)
{
	return (ft_powerf(a.x, 2) + ft_powerf(a.y, 2));
}
