/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vector_norm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:50:13 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 16:11:22 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"
#include "ft_math.h"
#include <math.h>

double	ft_vec2_norm(t_vec2 a)
{
	return (sqrt(ft_powerf(a.x, 2) + ft_powerf(a.y, 2)));
}

double	ft_vec3_norm(t_vec3 a)
{
	return (sqrt(ft_powerf(a.x, 2) + ft_powerf(a.y, 2) + ft_powerf(a.z, 2)));
}

double	ft_vec2_square_norm(t_vec2 a)
{
	return (ft_powerf(a.x, 2) + ft_powerf(a.y, 2));
}

double	ft_vec3_square_norm(t_vec3 a)
{
	return (ft_powerf(a.x, 2) + ft_powerf(a.y, 2) + ft_powerf(a.z, 2));
}
