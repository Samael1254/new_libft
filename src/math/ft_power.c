/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 01:07:09 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 17:16:33 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int nb, unsigned int power)
{
	unsigned int	i;
	int				result;

	i = 0;
	result = 1;
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
