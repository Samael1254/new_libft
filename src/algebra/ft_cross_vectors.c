/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cross_vectors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 15:27:38 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 16:20:53 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vec3	ft_cross_vec3(t_vec3 a, t_vec3 b)
{
	t_vec3	cross;

	cross.x = a.y * b.z - a.z * b.y;
	cross.y = a.z * b.x - a.x * b.z;
	cross.z = a.x * b.y - a.y * b.x;
	return (cross);
}
