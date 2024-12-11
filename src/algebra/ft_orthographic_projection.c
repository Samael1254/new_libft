/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_orthographic_projection.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 13:41:31 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 13:59:25 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vector3D	ft_orthographic_projection(t_vector4D v)
{
	t_vector3D	proj;

	proj.x = v.x;
	proj.y = v.y;
	proj.z = 0;
	return (proj);
}
