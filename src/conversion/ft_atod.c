#include "ft_strings.h"
#include "ft_conversion.h"

/*
 * returns a double from a string, returns 0 on error
 * find the dot in the char *, return the int instant if not found
 * */
double	ft_atod(const char *nptr)
{
	double	integer;
	double	decimal;
	int		decimal_len;
	char	*ptr_dot;

	ptr_dot = ft_strchr(nptr, '.');
	integer = (double)ft_atoi(nptr);
	if (!ptr_dot)
		return (integer);
	decimal = (double)ft_atoi(ptr_dot + 1);
	decimal_len = ft_strlen(ptr_dot + 1);
	while (decimal_len--)
		decimal /= 10;
	return (integer + decimal);
}
