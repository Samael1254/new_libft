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

t_vector2d	ft_direction_vector2d(t_vector3d line)
{
	t_vector2d	dir;

	dir.x = -line.y;
	dir.y = line.x;
	return (dir);
}
