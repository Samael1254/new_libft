/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scale_matrix.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:18:51 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 11:20:55 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scale_matrix3D(double m[3][3], double lambda)
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
			m[i][j++] *= lambda;
		i++;
	}
}

void	ft_scale_matrix4D(double m[4][4], double lambda)
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			m[i][j++] *= lambda;
		i++;
	}
}
