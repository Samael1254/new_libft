#include "ft_chars.h"
#include "ft_strings.h"
#include <stdlib.h>

static int	ft_count_words_charset(char *s, char *charset)
{
	int	n;

	n = 0;
	while (*s)
	{
		while (*s && ft_isincharset(*s, charset))
			s++;
		if (*s)
			n++;
		while (*s && !ft_isincharset(*s, charset))
			s++;
	}
	return (n);
}

static int	next_word_len_charset(char const *s, char *charset)
{
	int	s_len;

	s_len = 0;
	while (s[s_len] && !ft_isincharset(s[s_len], charset))
		s_len++;
	return (s_len);
}

static void	fill_line_charset(char *dest, const char *src, int len)
{
	int	j;

	j = 0;
	while (j < len)
	{
		dest[j] = src[j];
		j++;
	}
	dest[len] = '\0';
}

char	**ft_split_charset(char const *s, char *charset)
{
	int		i;
	int		s_len;
	char	**tab;
	int		size;

	size = ft_count_words_charset((char *)s, charset);
	tab = malloc((size + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = 0;
	while (*s && i < size)
	{
		while (*s && ft_isincharset(*s, charset))
			s++;
		s_len = next_word_len_charset(s, charset);
		tab[i] = malloc((s_len + 1) * sizeof(char));
		if (!tab[i])
			return (ft_free_strtab(tab), NULL);
		fill_line_charset(tab[i++], s, s_len);
		s += s_len;
	}
	return (tab[size] = NULL, tab);
}
