/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 10:59:32 by gfulconi          #+#    #+#             */
/*   Updated: 2025/02/03 13:29:53 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chars.h"
#include <stddef.h>

int	ft_str_is_number(const char *str)
{
	size_t	j;

	if (!str[0])
		return (0);
	j = 0;
	if ((str[0] == '-' || str[0] == '+') && str[1])
		j = 1;
	while (str[j])
	{
		if (!ft_isdigit(str[j]))
			return (0);
		j++;
	}
	return (1);
}
