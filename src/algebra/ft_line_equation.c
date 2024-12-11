/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_line_equation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 18:26:27 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 17:12:36 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vector3D	ft_line2D_equation(t_vector2D a, t_vector2D b)
{
	t_vector3D	line;

	line.x = b.y - a.y;
	line.y = a.x - b.x;
	line.z = -(line.x * a.x + line.y * a.y);
	return (line);
}
