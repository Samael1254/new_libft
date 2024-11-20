/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:30:03 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/20 10:50:57 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*j_str;
	int		len;

	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	j_str = malloc(sizeof(char) * (len + 1));
	if (!j_str)
		return (NULL);
	*j_str = 0;
	ft_strcat(j_str, (char *)s1);
	ft_strcat(j_str, (char *)s2);
	return (j_str);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	*str;

	(void)argc;
	str = ft_strjoin(argv[1], argv[2]);
	printf("%s", str);
	free(str);
}*/
