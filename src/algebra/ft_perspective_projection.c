/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perspective_projection.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 17:30:49 by gfulconi          #+#    #+#             */
/*   Updated: 2025/05/25 14:04:28 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vec3	ft_perspective_projection(t_vec4 v, t_vec4 cam_pos, t_vec3 cam_rot,
		t_ivec2 display_size)
{
	t_vec3	proj;
	t_vec4	view_v;

	(void)display_size;
	view_v = ft_rotate_vec4(v, cam_rot);
	view_v = ft_translate_vec4(view_v, ft_4to3_vec(cam_pos));
	if (view_v.x == 0)
		return (ft_set_vec3(0, 0, 0));
	proj.x = view_v.y / view_v.x;
	proj.y = view_v.z / view_v.x;
	proj.z = 1;
	return (proj);
}
