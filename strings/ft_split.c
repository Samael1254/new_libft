/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gfulconi <gfulconi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:57:11 by gfulconi          #+#    #+#             */
/*   Updated: 2024/11/12 18:30:13 by gfulconi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char *s, char c)
{
	int	n;

	n = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			n++;
		while (*s != c && *s)
			s++;
	}
	return (n);
}

static void	free_tab(char **tab, int i_max)
{
	int	i;

	i = 0;
	while (i < i_max)
		free(tab[i++]);
	free(tab);
}

static int	next_word_len(char const *s, char c)
{
	int	s_len;

	s_len = 0;
	while (s[s_len] != c && s[s_len])
		s_len++;
	return (s_len);
}

static void	ft_strncpy(char *dest, const char *src, int len)
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

	size = count_words((char *)s, c);
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
			return (free_tab(tab, i), NULL);
		ft_strncpy(tab[i++], s, s_len);
		s += s_len;
	}
	return (tab[size] = 0, tab);
}

/*#include <stdio.h>
int	main(int argc, char **argv)
{
	char	**tab;
	int		size;

	(void)argc;
	size = count_words(argv[1], argv[2][0]);
	tab = ft_split(argv[1], argv[2][0]);
	printf("%d\n", size);
	while (*tab)
	{
		printf("%s\n", *tab);
		tab++;
	}
}*/
