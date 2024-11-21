/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nblen_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/21 11:38:30 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/21 11:41:01 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

int	signed_nbrlen_base(long long nb, int base_len)
{
	int	len;

	if (nb == LONG_MIN)
		return (20);
	if (nb < 0)
	{
		len = 2;
		nb *= -1;
	}
	else
		len = 1;
	while (nb >= base_len)
	{
		nb = nb / base_len;
		len++;
	}
	return (len);
}

int	usigned_nbrlen_base(unsigned long long nb, int base_len)
{
	int	len;

	len = 1;
	while (nb >= (unsigned int)base_len)
	{
		nb = nb / base_len;
		len++;
	}
	return (len);
}
