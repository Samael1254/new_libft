/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_direction_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 19:10:16 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 19:11:34 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vec2	ft_direction_vec2(t_vec3 line)
{
	t_vec2	dir;

	dir.x = -line.y;
	dir.y = line.x;
	return (dir);
}
