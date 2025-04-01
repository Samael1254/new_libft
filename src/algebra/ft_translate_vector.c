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

t_vec4	ft_translate_vec4(t_vec4 v, t_vec3 translator)
{
	double	tm[4][4];

	ft_set_translation_mat4(tm, translator);
	return (ft_mat_vec_product4(tm, v));
}

t_vec3	ft_translate_vec3(t_vec3 v, t_vec2 translator)
{
	double	tm[3][3];

	ft_set_translation_mat3(tm, translator);
	return (ft_mat_vec_product3(tm, v));
}
