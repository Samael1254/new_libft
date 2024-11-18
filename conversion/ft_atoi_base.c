/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 13:51:36 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/18 17:32:37 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../strings/strings.h"
#include "conversion.h"

int	ft_atoi_base(char *str, char *base)
{
	int	sign;
	int	nb;
	int	i;

	if (ft_check_base_errors(base))
		return (0);
	sign = 1;
	nb = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (get_char_index(str[i], base) != -1)
		nb = nb * ft_strlen(base) + get_char_index(str[i++], base);
	return (nb * sign);
}
