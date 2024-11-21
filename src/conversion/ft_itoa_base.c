#include "ft_math.h"
#include "ft_strings.h"
#include <stdlib.h>

char	*ft_itoa_base(int nb, char *base)
{
	char	*result;
	int		i;
	int		digit_count;
	int		base_len;

	base_len = ft_strlen(base);
	digit_count = signed_nbrlen_base(nb, base_len);
	result = malloc(sizeof(char) * (digit_count + (nb < 0) + 1));
	if (result == NULL)
		return (0);
	result[digit_count + (nb < 0)] = '\0';
	if (nb < 0)
		result[0] = '-';
	i = (nb < 0);
	nb *= (1 - 2 * (nb < 0));
	while (digit_count > 0)
	{
		result[i++] = base[nb / ft_power(base_len, digit_count - 1)];
		nb = nb % ft_power(base_len, digit_count-- - 1);
	}
	return (result);
}
