/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powerf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:53:39 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 21:03:30 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_math.h"

double	ft_powerf(double nb, int power)
{
	int	i;
	int	result;

	i = 0;
	result = 1;
	while (i < ft_abs(power))
	{
		result *= nb;
		i++;
	}
	if (power < 0 && result != 0)
		return (1.0 / result);
	return (result);
}
