/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_translate_vector.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 12:49:38 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/13 12:51:56 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

t_vector4d	ft_translate_vector4d(t_vector4d v, t_vector3d translator)
{
	double	tm[4][4];

	ft_set_translation_matrix4d(tm, translator);
	return (ft_matrix_vector_product4d(tm, v));
}

t_vector3d	ft_translate_vector3d(t_vector3d v, t_vector2d translator)
{
	double	tm[3][3];

	ft_set_translation_matrix3d(tm, translator);
	return (ft_matrix_vector_product3d(tm, v));
}
