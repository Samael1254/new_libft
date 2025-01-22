#include "ft_chars.h"
#include "ft_printf.h"
#include <stdlib.h>

char	*ft_strtok(char *str, const char *delim)
{
	static char	*start;
	char		*token;
	int			i;

	if (str)
		start = str;
	while (*start && ft_get_char_index(*start, delim) != -1)
		start++;
	if (*start == '\0')
		return (NULL);
	i = 0;
	while (start[i] && ft_get_char_index(start[i], delim) == -1)
		i++;
	token = malloc((i + 1) * sizeof(char));
	if (!token)
		return (NULL);
	i = 0;
	while (*start && ft_get_char_index(*start, delim) == -1)
		token[i++] = *start++;
	token[i] = '\0';
	return (token);
}
