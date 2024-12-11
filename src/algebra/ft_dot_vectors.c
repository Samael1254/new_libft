/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dot_vectors.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:38 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 16:03:49 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

double	ft_dot_vectors2D(t_vector2D a, t_vector2D b)
{
	return (a.x * b.x + a.y * b.y);
}

double	ft_dot_vectors3D(t_vector3D a, t_vector3D b)
{
	return (a.x * b.x + a.y * b.y + a.z * b.z);
}
