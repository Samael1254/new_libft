/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:21:08 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/12 15:10:01 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"
#include "ft_printf.h"

static int	matrix_max_elem_size(int precision, int size, double m[size][size])
{
	int	i;
	int	j;
	int	max_len;

	i = 0;
	max_len = 0;
	while (i < size)
	{
		j = 0;
		while (j < size)
			max_len = ft_max(ft_doublelen(m[i][j++], precision), max_len);
		i++;
	}
	return (max_len);
}

void	ft_print_matrix3d(double m[3][3], int precision)
{
	int	j;
	int	max_len;

	max_len = matrix_max_elem_size(precision, 3, m);
	ft_printf("    ⌜ ");
	j = 0;
	while (j < 3)
		ft_printf("%*.*f ", max_len, precision, m[0][j++]);
	ft_printf("⌝\nm = | ");
	j = 0;
	while (j < 3)
		ft_printf("%*.*f ", max_len, precision, m[1][j++]);
	ft_printf("|\n    ⌞ ");
	j = 0;
	while (j < 3)
		ft_printf("%*.*f ", max_len, precision, m[2][j++]);
	ft_printf("⌟\n\n");
}

void	ft_print_matrix4d(double m[4][4], int precision)
{
	int	j;
	int	max_len;

	max_len = matrix_max_elem_size(precision, 4, m);
	ft_printf("    ⌜ ");
	j = 0;
	while (j < 4)
		ft_printf("%*.*f ", max_len, precision, m[0][j++]);
	ft_printf("⌝\nm = | ");
	j = 0;
	while (j < 4)
		ft_printf("%*.*f ", max_len, precision, m[1][j++]);
	ft_printf("|\n    | ");
	j = 0;
	while (j < 4)
		ft_printf("%*.*f ", max_len, precision, m[2][j++]);
	ft_printf("|\n    ⌞ ");
	j = 0;
	while (j < 4)
		ft_printf("%*.*f ", max_len, precision, m[3][j++]);
	ft_printf("⌟\n\n");
}
