#include "ft_chars.h"
#include "ft_strings.h"
#include <stdlib.h>

char	*ft_strtok(char *str, const char *delim)
{
	static char	*start;
	char		*token;
	int			i;

	if (str)
		start = str;
	start += ft_strspn(start, delim);
	if (*start == '\0')
		return (NULL);
	token = malloc((ft_strcspn(start, delim) + 1) * sizeof(char));
	if (!token)
		return (NULL);
	i = 0;
	while (*start && ft_get_char_index(*start, delim) == -1)
		token[i++] = *start++;
	token[i] = '\0';
	return (token);
}
