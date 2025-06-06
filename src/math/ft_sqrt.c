/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 16:58:44 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/22 17:48:29 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

long	ft_sqrt(unsigned long nb)
{
	long	i;

	i = 0;
	if (nb == 0)
		return (0);
	while (i * i <= nb && i <= 3037000499)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (-1);
}
