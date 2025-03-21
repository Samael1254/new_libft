#include "ft_conversion.h"
#include "ft_math.h"
#include "ft_strings.h"

/*
 * returns a double from a string, returns 0 on error
 * find the dot in the char *, return the int instant if not found
 * */
double	ft_atod(const char *nptr)
{
	double	integer;
	double	decimal;
	char	*ptr_dot;

	integer = (double)ft_atoi(nptr);
	ptr_dot = ft_strchr(nptr, '.');
	if (!ptr_dot)
		return (integer);
	decimal = (double)ft_atoi(ptr_dot + 1);
	decimal /= ft_powerf(10, ft_strspn(ptr_dot + 1, "0123456789"));
	return (integer + (2 * (integer > 0) - 1) * decimal);
}
