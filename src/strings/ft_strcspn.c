#include "ft_chars.h"
#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	len;

	len = 0;
	while (s[len] && ft_get_char_index(s[len], reject) == -1)
		len++;
	return (len);
}
