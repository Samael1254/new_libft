/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_product.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:23:06 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 11:32:52 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_matrix3d_product(double a[3][3], double b[3][3], double prod[3][3])
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			prod[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2]
				* b[2][j];
			j++;
		}
		i++;
	}
}

void	ft_matrix4d_product(double a[4][4], double b[4][4], double prod[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			prod[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j] + a[i][2]
				* b[2][j] + a[i][3] * b[3][j];
			j++;
		}
		i++;
	}
}
