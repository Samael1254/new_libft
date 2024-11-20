/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:55:15 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 10:55:35 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;

	i = 0;
	if (ft_strlen(s) >= start)
	{
		while (i < len && s[start + i])
			i++;
	}
	sub = malloc(sizeof(char) * (i + 1));
	if (sub == NULL)
		return (NULL);
	i = 0;
	if (ft_strlen(s) >= start)
	{
		while (i < len && s[start + i])
		{
			sub[i] = s[start + i];
			i++;
		}
	}
	sub[i] = '\0';
	return (sub);
}

/* #include <stdio.h> */
/* int	main(void) */
/* { */
/* 	char *s = ft_substr("42", 0, 0); */
/* 	printf("%s\n", s); */
/* 	free(s); */
/* } */
