/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_null_matrix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 11:06:12 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/11 13:47:58 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_set_null_matrix2D(double m[2][2])
{
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		j = 0;
		while (j < 2)
			m[i][j++] = 0;
		i++;
	}
}

void	ft_set_null_matrix3D(double m[3][3])
{
	int	i;
	int	j;

	i = 0;
	while (i < 3)
	{
		j = 0;
		while (j < 3)
			m[i][j++] = 0;
		i++;
	}
}

void	ft_set_null_matrix4D(double m[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
			m[i][j++] = 0;
		i++;
	}
}
