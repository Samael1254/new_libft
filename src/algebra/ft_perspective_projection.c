/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perspective_projection.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:30:49 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/15 13:33:59 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vector3d	ft_perspective_projection(t_vector4d v, t_vector4d cam_pos,
		t_vector3d cam_rot, t_ivector2d display_size)
{
	t_vector3d	proj;
	t_vector4d	view_v;

	(void)display_size;
	view_v = ft_rotate_vector4d(v, cam_rot);
	view_v = ft_translate_vector4d(view_v, ft_4dto3d_vector(cam_pos));
	if (view_v.x == 0)
		return (ft_set_vector3d(0, 0, 0));
	proj.x = view_v.y / view_v.x;
	proj.y = view_v.z / view_v.x;
	proj.z = 1;
	return (proj);
}
