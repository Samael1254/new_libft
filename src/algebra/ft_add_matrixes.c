/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_add_mat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:14:25 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 11:17:43 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_add_mat3d(double a[3][3], double b[3][3], double sum[3][3])
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
		{
			sum[i][j] = a[i][j] + b[i][j];
			j++;
		}
		i++;
	}
}

void	ft_add_mat4d(double a[4][4], double b[4][4], double sum[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			sum[i][j] = a[i][j] + b[i][j];
			j++;
		}
		i++;
	}
}
