/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perspective_projection.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:30:49 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/13 12:54:32 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vector3D	ft_perspective_projection(t_vector4D v, t_vector4D cam_pos,
		t_vector3D cam_rot, t_ivector2D display_size)
{
	t_vector3D	proj;
	t_vector4D	view_v;

	view_v = ft_rotate_vector4D(ft_sub_vectors4D(v, cam_pos), cam_rot);
	proj.x = ((double)display_size.x / 2) * view_v.x + ((double)display_size.x
			/ 2) * view_v.z;
	proj.y = ((double)display_size.x / 2) * view_v.y + ((double)display_size.y
			/ 2) * view_v.z;
	proj.z = 1;
	return (proj);
}
