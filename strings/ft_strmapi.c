/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:55:07 by gfulconi          #+#    #+#             */
/*   Updated: 2024/08/17 16:55:09 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	capitalize_even(unsigned int i, char c)
{
	if (i % 2)
		return (c - 32);
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*result;
	unsigned int	i;

	result = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = (*f)(i, (char)s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strmapi("abcdefghijk", &capitalize_even));
}*/
