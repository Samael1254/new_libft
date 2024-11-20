/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:55:58 by gfulconi          #+#    #+#             */
/*   Updated: 2024/08/17 16:56:03 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*void	capitalize_even(unsigned int i, char *c)
{
	if (i % 2)
		*c -= 32;
}*/

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		(*f)(i, &s[i]);
		i++;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char str[] = "abcdefghijk";

	ft_striteri(str, &capitalize_even);
	printf("%s\n", str);
}*/
