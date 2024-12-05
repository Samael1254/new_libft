/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 16:55:40 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/05 14:46:22 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_chars.h"
#include "ft_strings.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	int		len;
	int		start_trim;

	start_trim = 0;
	while (ft_isincharset(s1[start_trim], set))
		start_trim++;
	len = 0;
	while (s1[start_trim + len])
		len++;
	while (ft_isincharset(s1[start_trim + len - 1], set) && len != 0)
		len--;
	trimmed = malloc(sizeof(char) * (len + 1));
	if (trimmed == NULL)
		return (NULL);
	ft_strncpy(trimmed, &s1[start_trim], len);
	trimmed[len] = '\0';
	return (trimmed);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", ft_strtrim(argv[1], argv[2]));
}*/
