/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orthographic_projection.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:41:31 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/12 17:58:03 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vector3d	ft_orthographic_projection(t_vector4d v)
{
	t_vector3d	proj;

	proj.x = v.x;
	proj.y = v.y;
	proj.z = 1;
	return (proj);
}
