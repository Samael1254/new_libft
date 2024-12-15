/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_are_vectors_ortho.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 17:00:07 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/10 17:01:50 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

int	ft_are_vectors2d_ortho(t_vector2d a, t_vector2d b)
{
	if (ft_dot_vectors2d(a, b) == 0)
		return (1);
	return (0);
}

int	ft_are_vectors3d_ortho(t_vector3d a, t_vector3d b)
{
	if (ft_dot_vectors3d(a, b) == 0)
		return (1);
	return (0);
}
