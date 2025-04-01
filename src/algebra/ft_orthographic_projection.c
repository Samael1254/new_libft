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

t_vec3	ft_orthographic_projection(t_vec4 v)
{
	t_vec3	proj;

	proj.x = v.x;
	proj.y = v.y;
	proj.z = 1;
	return (proj);
}
