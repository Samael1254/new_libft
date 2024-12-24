/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:57:11 by gfulconi          #+#    #+#             */
/*   Updated: 2024/12/24 13:20:03 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"
#include <stdlib.h>

static int	next_word_len(char const *s, char c)
{
	int	s_len;

	s_len = 0;
	while (s[s_len] != c && s[s_len])
		s_len++;
	return (s_len);
}

static void	fill_line(char *dest, const char *src, int len)
{
	int	j;

	j = 0;
	while (j < len)
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		s_len;
	char	**tab;
	int		size;

	size = ft_count_words((char *)s, c);
	tab = malloc(sizeof(char *) * (size + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s && i < size)
	{
		while (*s == c && *s)
			s++;
		s_len = next_word_len(s, c);
		tab[i] = malloc(sizeof(char) * (s_len + 1));
		if (!tab[i])
			return (ft_free_strtab(tab), NULL);
		fill_line(tab[i++], s, s_len);
		s += s_len;
	}
	return (tab[size] = 0, tab);
}
