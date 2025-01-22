#include "ft_chars.h"
#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	len;

	len = 0;
	while (s[len] && ft_get_char_index(s[len], accept) != -1)
		len++;
	return (len);
}
