/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 17:06:10 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/18 17:26:30 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../math/ft_math.h"
#include "../strings/strings.h"
#include <stdlib.h>

char	*ft_itoa(int nb)
{
	char	*result;
	int		i;
	int		digit_count;

	digit_count = get_intlen_base(nb, 10);
	result = malloc(sizeof(char) * (digit_count + (nb < 0) + 1));
	if (result == NULL)
		return (NULL);
	if (nb == -2147483648)
	{
		ft_strcpy(result, "-2147483648");
		return (result);
	}
	result[digit_count + (nb < 0)] = '\0';
	if (nb < 0)
		result[0] = '-';
	i = (nb < 0);
	nb *= (1 - 2 * (nb < 0));
	while (digit_count > 0)
	{
		result[i++] = nb / ft_power(10, digit_count - 1) + 48;
		nb = nb % ft_power(10, digit_count-- - 1);
	}
	return (result);
}
