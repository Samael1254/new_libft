/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_base_errors.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 17:31:47 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/18 17:31:58 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../strings/strings.h"

int	ft_check_base_errors(char *b)
{
	int	i;

	if (ft_strlen(b) < 2)
		return (1);
	while (*b)
	{
		if ((*b > 8 && *b < 14) || *b == 32 || *b == 45 || *b == 43)
			return (1);
		i = 1;
		while (b[i])
		{
			if (*b == b[i])
				return (1);
			i++;
		}
		b++;
	}
	return (0);
}
