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

t_vector4D	ft_translate_vector4D(t_vector4D v, t_vector3D translator)
{
	double	tm[4][4];

	ft_set_translation_matrix4D(tm, translator);
	return (ft_matrix_vector_product4D(tm, v));
}

t_vector3D	ft_translate_vector3D(t_vector3D v, t_vector2D translator)
{
	double	tm[3][3];

	ft_set_translation_matrix3D(tm, translator);
	return (ft_matrix_vector_product3D(tm, v));
}
