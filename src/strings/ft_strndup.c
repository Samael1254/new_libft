#include "ft_strings.h"
#include <stddef.h>
#include <stdlib.h>

char	*ft_strndup(const char *s, size_t n)
{
	char	*dest;
	int		len;

	if (ft_strlen(s) < n)
		len = ft_strlen(s);
	else
		len = n;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_strncpy(dest, s, len);
	dest[len] = '\0';
	return (dest);
}
