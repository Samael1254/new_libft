/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 11:13:54 by gfulconi          #+#    #+#             */
/*   Updated: 2024/08/17 17:54:43 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && (unsigned char)s1[i] == (unsigned char)s2[i] && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/* #include <stdio.h> */
/* #include <string.h> */
/* int	main(int argc, char **argv) */
/* { */
/* 	(void)argc; */
/* 	printf("%d\n", strncmp(argv[1], argv[2], ft_atoi(argv[3]))); */
/* 	printf("%d\n", ft_strncmp(argv[1], argv[2], ft_atoi(argv[3]))); */
/* } */
