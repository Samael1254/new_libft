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

#include "algebra.h"

int	ft_are_vectors2D_ortho(t_vector2D a, t_vector2D b)
{
	if (ft_dot_vectors2D(a, b) == 0)
		return (1);
	return (0);
}

int	ft_are_vectors3D_ortho(t_vector3D a, t_vector3D b)
{
	if (ft_dot_vectors3D(a, b) == 0)
		return (1);
	return (0);
}
