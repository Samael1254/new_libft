/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:52:01 by gfulconi          #+#    #+#             */
/*   Updated: 2024/08/17 16:52:03 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d == s)
		return (dest);
	if (d > s)
	{
		i = n + 1;
		while (--i > 0)
			d[i - 1] = s[i - 1];
	}
	else
	{
		i = 0;
		while (++i <= n)
			d[i - 1] = s[i - 1];
	}
	return (dest);
}
