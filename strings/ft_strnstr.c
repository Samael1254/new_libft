/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:53:10 by gfulconi          #+#    #+#             */
/*   Updated: 2024/08/17 16:53:12 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i] && i + ft_strlen(little) <= len)
	{
		if (ft_strncmp(&big[i], little, ft_strlen(little)) == 0)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char *substr;

	substr = ft_strnstr(argv[1], argv[2], 10);
	if (substr)
		printf("%s\n", substr);
}*/
