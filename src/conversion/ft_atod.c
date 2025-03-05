#include "ft_strings.h"
#include "ft_conversion.h"

/*
 * returns a double from a string, returns 0 on error
 * */
double	ft_atod(const char *nptr)
{
	double	integer;
	double	decimal;
	char	**split;
	int		decimal_len;

	split = ft_split(nptr, '.');
	if (!split || !*split)
		return (0);
	integer = (double)ft_atoi(split[0]);
	if (ft_strtab_size(split) < 2)
	{
		ft_free_strtab(split);
		return (integer);
	}
	decimal = (double)ft_atoi(split[1]);
	decimal_len = ft_strlen(split[1]);
	ft_free_strtab(split);
	while (decimal_len--)
		decimal /= 10;
	return (integer + decimal);
}
