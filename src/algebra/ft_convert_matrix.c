/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_matrix.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:42:37 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 12:41:43 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_algebra.h"

void	ft_3Dto4D_matrix(double m3[3][3], double m4[4][4])
{
	int	i;
	int	j;

	ft_set_null_matrix4D(m4);
	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			m4[i][j] = m3[i][j];
			j++;
		}
		i++;
	}
	m4[3][3] = 1;
}

void	ft_4Dto3D_matrix(double m4[4][4], double m3[3][3])
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			m3[i][j] = m4[i][j];
			j++;
		}
		i++;
	}
}
