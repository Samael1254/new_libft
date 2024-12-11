/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:21:08 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 19:21:17 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_matrix3D(double m[3][3])
{
	int	i;

	ft_printf("    ⌜ ");
	i = 0;
	while (i < 3)
		ft_printf("%6.3f ", m[0][i++]);
	ft_printf("⌝\nm = | ");
	i = 0;
	while (i < 3)
		ft_printf("%6.3f ", m[1][i++]);
	ft_printf("|\n    ⌞ ");
	i = 0;
	while (i < 3)
		ft_printf("%6.3f ", m[2][i++]);
	ft_printf("⌟\n\n");
}

void	ft_print_matrix4D(double m[4][4])
{
	int	i;

	ft_printf("    ⌜ ");
	i = 0;
	while (i < 4)
		ft_printf("%6.3f ", m[0][i++]);
	ft_printf("⌝\nm = | ");
	i = 0;
	while (i < 4)
		ft_printf("%6.3f ", m[1][i++]);
	ft_printf("|\n    | ");
	i = 0;
	while (i < 4)
		ft_printf("%6.3f ", m[2][i++]);
	ft_printf("|\n    ⌞ ");
	i = 0;
	while (i < 4)
		ft_printf("%6.3f ", m[3][i++]);
	ft_printf("⌟\n\n");
}
